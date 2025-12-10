// === ROS-COMPATIBLE ARDUINO MOTOR + RELAY FIRMWARE ===
// Commands supported over Serial (115200):
//   CMD L<left_pwm> R<right_pwm>   where -255 <= pwm <= 255
//   RELAY ON
//   RELAY OFF
//
// Behavior:
//   - Relay and LED automatically turn ON when motors move (L or R != 0)
//   - Relay and LED OFF when motors are stopped

#include <Arduino.h>

// ---------------- Motor pins (L298N) ----------------
const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;
const int ENA = 6;    // PWM
const int ENB = 10;   // PWM (must be a PWM pin on Arduino Uno)

// -------------- Light & Relay pins ------------------
const int lightPin = 8;
const int relayPin = 9;   // Adjust if your relay is on a different pin

// -------------- Input buffer ------------------------
String input = "";

// ----------------------------------------------------
// INITIAL SETUP
// ----------------------------------------------------
void setup() {
  Serial.begin(115200);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  pinMode(lightPin, OUTPUT);
  pinMode(relayPin, OUTPUT);

  // Start with everything OFF
  digitalWrite(lightPin, LOW);
  digitalWrite(relayPin, LOW);
  stopMotors();

  Serial.println("ROS Motor + Relay Controller Ready");
}

// ----------------------------------------------------
// MAIN LOOP — read serial from ROS
// ----------------------------------------------------
void loop() {
  while (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      processCommand(input);
      input = "";
    } else if (c != '\r') {
      input += c;
    }
  }
}

// --------------------------------------------------------
// PROCESS COMMANDS: CMD L..R.. or RELAY ON/OFF
// --------------------------------------------------------
void processCommand(String cmd) {
  cmd.trim();
  if (cmd.length() == 0) return;

  Serial.print("RX: ");
  Serial.println(cmd);

  // --- Relay control from ROS ---
  if (cmd == "RELAY ON") {
    digitalWrite(relayPin, HIGH);
    Serial.println("OK RELAY ON");
    return;
  }

  if (cmd == "RELAY OFF") {
    digitalWrite(relayPin, LOW);
    Serial.println("OK RELAY OFF");
    return;
  }

  // --- Motor Command ---
  if (!cmd.startsWith("CMD")) {
    Serial.println("ERR UnknownCmd");
    return;
  }

  int Lidx = cmd.indexOf('L');
  int Ridx = cmd.indexOf('R');

  if (Lidx < 0 || Ridx < 0) {
    Serial.println("ERR BadFormat");
    return;
  }

  int leftPWM  = cmd.substring(Lidx + 1, Ridx).toInt();
  int rightPWM = cmd.substring(Ridx + 1).toInt();

  driveMotors(leftPWM, rightPWM);

  Serial.print("OK L=");
  Serial.print(leftPWM);
  Serial.print(" R=");
  Serial.println(rightPWM);
}

// --------------------------------------------------------
// MOTOR + RELAY LOGIC
// --------------------------------------------------------
void driveMotors(int L, int R) {
  // Limit to valid range
  L = constrain(L, -255, 255);
  R = constrain(R, -255, 255);

  bool moving = (L != 0 || R != 0);

  // Relay + Light ON when moving, OFF when stopped
  digitalWrite(relayPin, moving ? HIGH : LOW);
  digitalWrite(lightPin, moving ? HIGH : LOW);

  // Left wheel
  if (L > 0) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
  } else if (L < 0) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  } else {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }
  analogWrite(ENA, abs(L));

  // Right wheel
  if (R > 0) {
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
  } else if (R < 0) {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
  } else {
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
  analogWrite(ENB, abs(R));
}

void stopMotors() {
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
