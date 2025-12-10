import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import curses
import time


class KeyboardTeleopArrows(Node):
    def __init__(self):
        super().__init__('keyboard_teleop_arrows')

        self.pub = self.create_publisher(Twist, 'cmd_vel', 10)

        # vitesses paramétrables
        self.declare_parameter('linear_speed', 0.15)
        self.declare_parameter('angular_speed', 0.7)

        self.linear_speed = self.get_parameter('linear_speed').get_parameter_value().double_value
        self.angular_speed = self.get_parameter('angular_speed').get_parameter_value().double_value

        self.get_logger().info(
            "KeyboardTeleopArrows démarré.\n"
            "Utilise les FLÈCHES du clavier :\n"
            "  ↑  avancer\n"
            "  ↓  reculer\n"
            "  ←  tourner gauche\n"
            "  →  tourner droite\n"
            "  ESPACE : stop\n"
            "  q : quitter"
        )

    def send_cmd(self, vx, wz):
        msg = Twist()
        msg.linear.x = vx
        msg.angular.z = wz
        self.pub.publish(msg)

    def run_curses(self):
        stdscr = curses.initscr()
        curses.noecho()
        curses.cbreak()
        stdscr.keypad(True)
        stdscr.nodelay(True)

        try:
            while rclpy.ok():
                c = stdscr.getch()

                vx = 0.0
                wz = 0.0

                if c == curses.KEY_UP:
                    vx = self.linear_speed
                elif c == curses.KEY_DOWN:
                    vx = -self.linear_speed
                elif c == curses.KEY_LEFT:
                    wz = self.angular_speed
                elif c == curses.KEY_RIGHT:
                    wz = -self.angular_speed
                elif c == ord(' '):
                    # stop immédiat
                    vx = 0.0
                    wz = 0.0
                elif c == ord('q'):
                    # quitter
                    self.send_cmd(0.0, 0.0)
                    break
                else:
                    # pas de touche => on garde le dernier ordre OU on arrête
                    # ici on choisit d'arrêter quand aucune touche n'est pressée
                    vx = 0.0
                    wz = 0.0

                self.send_cmd(vx, wz)
                time.sleep(0.05)

        finally:
            curses.nocbreak()
            stdscr.keypad(False)
            curses.echo()
            curses.endwin()


def main(args=None):
    rclpy.init(args=args)
    node = KeyboardTeleopArrows()
    try:
        node.run_curses()
    except KeyboardInterrupt:
        node.get_logger().info("KeyboardTeleopArrows: Ctrl+C")
    finally:
        node.send_cmd(0.0, 0.0)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

