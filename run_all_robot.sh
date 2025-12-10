#!/usr/bin/env bash
set -e

echo "=============================================="
echo "          R O B O T   B R I N G U P"
echo "      (LiDAR + Motors + RViz + Teleop)"
echo "=============================================="

echo "=== [1/7] Sourcing ROS 2 and workspace ==="
source /opt/ros/humble/setup.bash
source "$HOME/ros2_ws/install/setup.bash"

echo "=== [2/7] Detecting LiDAR on /dev/ttyUSB* ==="
LIDAR_PORT=$(ls /dev/ttyUSB* 2>/dev/null | head -n 1 || true)

if [ -z "$LIDAR_PORT" ]; then
  echo "!!! ERROR: No RPLIDAR detected on /dev/ttyUSB*"
  echo "Plug in the LiDAR and try again."
  exit 1
fi

echo "    LiDAR detected on: $LIDAR_PORT"

echo "=== [3/7] Launching robot bringup ==="
ros2 launch my_robot_bringup mapping_control.launch.py lidar_port:=$LIDAR_PORT &
BRINGUP_PID=$!
sleep 5

echo "=== [4/7] Launching RViz ==="
RVIZ_CONFIG="$HOME/ros2_ws/src/my_robot_bringup/config/my_mapping.rviz"
if [ -f "$RVIZ_CONFIG" ]; then
    rviz2 -d "$RVIZ_CONFIG" &
else
    echo "RViz config not found, starting default RViz."
    rviz2 &
fi
RVIZ_PID=$!

echo "=== [5/7] Starting WASD teleop ==="
ros2 run my_robot_control keyboard_teleop &
TELEOP_PID=$!
sleep 1

echo "=== [6/7] Showing running processes ==="
echo "Bringup PID:  $BRINGUP_PID"
echo "RViz PID:     $RVIZ_PID"
echo "Teleop PID:   $TELEOP_PID"

echo "----------------------------------------------------"
echo "Robot is fully running!"
echo "Controls:"
echo "   w = forward"
echo "   s = backward"
echo "   a = left rotate"
echo "   d = right rotate"
echo "   space = stop"
echo "   q = quit teleop"
echo ""
echo "Press CTRL+C in this terminal to shutdown everything."
echo "----------------------------------------------------"

# Wait until the bringup exits
wait $BRINGUP_PID

echo "Shutting down..."
kill $RVIZ_PID 2>/dev/null || true
kill $TELEOP_PID 2>/dev/null || true

echo "All robot processes stopped."

