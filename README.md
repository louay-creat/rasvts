# RASVTS – ROS2 Differential Drive Robot (RPLIDAR + Arduino + WASD Teleop)

This repo contains everything needed to run our ROS2 robot:

- Differential drive base (4 DC motors via L298N)
- Arduino Uno motor + relay controller
- RPLIDAR (rplidar_ros)
- ROS2 Humble control stack
- WASD keyboard teleop
- Live mapping with slam_toolbox

---

## 1. Hardware Overview

**Controller:**
- Ubuntu PC / Laptop / Raspberry Pi (ROS2 Humble)

**Microcontroller:**
- Arduino Uno (connected via USB → `/dev/arduino`)

**Motors + Driver:**
- 4 × DC motors
- L298N dual H-bridge
  - IN1 = D2
  - IN2 = D3
  - IN3 = D4
  - IN4 = D5
  - ENA = D6 (PWM, left motor enable)
  - ENB = D10 (PWM, right motor enable)

**Lights / Relay:**
- LED: D8 (ON when robot moves)
- Relay: D9 (ON when robot moves)

**LiDAR:**
- RPLIDAR (USB → `/dev/ttyUSB*`)
- ROS2 package: `rplidar_ros`

---

## 2. Arduino Firmware

The Arduino firmware:

- Listens on Serial @ **115200 baud**
- Commands:
  - `CMD L<pwm> R<pwm>` where PWM ∈ [-255, 255]
  - `RELAY ON` / `RELAY OFF`
- Behavior:
  - LED + relay turn ON automatically when either wheel has non-zero PWM
  - Direction determined by PWM sign (+ forward, − backward)

### Flashing the firmware

1. Open the `.ino` file in the repo:
   - `arduino/ros_motor_relay_controller.ino` (adjust path if different)
2. Select:
   - Board: **Arduino Uno**
   - Port: `/dev/arduino` or `/dev/ttyACM0`
3. Upload
4. Test via Serial Monitor @ 115200:
   - `CMD L200 R200` → robot should move forward strongly
   - `CMD L-200 R-200` → backward
   - `CMD L200 R-200` → rotate in place

---

## 3. ROS2 Packages in This Repo

Workspace folder: `~/ros2_ws`

- `my_robot_control/`
  - `diff_drive_serial_bridge.py`  
    - Subscribes to `/cmd_vel`
    - Converts linear/angular speed to left/right PWM
    - Sends `CMD Lxxx Rxxx` to Arduino over `/dev/arduino`
  - `fake_odom_node.py`  
    - Integrates `/cmd_vel` → `/odom` + TF `odom → base_link`
    - Used for mapping (slam_toolbox)
  - `keyboard_teleop.py`  
    - WASD teleop:
      - `w`: forward
      - `s`: backward
      - `a`: turn left
      - `d`: turn right
      - `space`: stop
      - `q`: quit
- `my_robot_bringup/`
  - `launch/manual_control.launch.py`  
    - Minimal control stack (no mapping)
    - Starts:
      - `robot_state_publisher`
      - `rplidar_ros`
      - static TF `base_link → laser`
      - `diff_drive_serial_bridge`
  - `launch/mapping_control.launch.py`  
    - Full mapping stack
    - Starts:
      - Everything from manual_control
      - `fake_odom_node`
      - `slam_toolbox` (async_slam_toolbox_node)
- `my_robot_description/`
  - URDF/XACRO description in `urdf/`

---

## 4. Setup on a New Machine (Robot / Pi / Teammate PC)

### 4.1 Requirements

- Ubuntu 22.04
- Git
- Internet

### 4.2 Automatic setup

On a new machine:

```bash
git clone https://github.com/louay-creat/rasvts.git ~/ros2_ws
cd ~/ros2_ws
chmod +x setup_robot_machine.sh
./setup_robot_machine.sh

