# ESP8266 H-Bridge Module Project

#### Project Overview
This project demonstrates how to control a DC motor using an H-Bridge module with an ESP8266 microcontroller. It allows the motor to rotate forward and backward by switching the polarity of its connections using the H-Bridge.

#### Components Needed
- **ESP8266 Microcontroller**
- **H-Bridge Motor Driver Module (e.g., L298N, L293D)**
- **DC Motor**
- **Jumper Wires**
- **Power Supply for Motor (depending on motor specifications)**

#### Circuit Setup
1. **Connecting the H-Bridge Module to ESP8266:**
   - **motorPin1 (IN1):** Connect to a GPIO pin on ESP8266 (e.g., D1).
   - **motorPin2 (IN2):** Connect to another GPIO pin on ESP8266 (e.g., D2).
   - **+5V and GND:** Connect to the respective +5V and GND pins on ESP8266.
   - **Motor Connections:** Connect the DC motor to the output terminals of the H-Bridge module (check the module's datasheet for exact pin configurations).

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Upload the provided Arduino code to the ESP8266.
   - Connect the ESP8266 to your computer and select the appropriate board and port from the Tools menu.

2. **Testing:**
   - After uploading the code, the motor will rotate forward for 2 seconds and then backward for 2 seconds continuously.
   - Ensure the motor responds correctly to the forward and backward commands.

#### Code Explanation
- The code defines two GPIO pins (`motorPin1` and `motorPin2`) connected to the H-Bridge module for controlling the direction of the DC motor.
- Two functions, `motorForward()` and `motorBackward()`, are used to set the appropriate states (`HIGH` and `LOW`) to the motor control pins to rotate the motor forward and backward, respectively.

#### Applications
- **Robotics Projects:** Control motors for movement in robotic applications.
- **Automation:** Use in projects where precise motor control and direction switching are required.
- **DIY Vehicles:** Implement in small vehicles or drones for directional control.

#### Notes
- **Motor Specifications:** Ensure the H-Bridge module and the power supply can handle the current and voltage requirements of your DC motor.
- **Safety:** Avoid connecting the motor directly to the ESP8266; always use the H-Bridge module to isolate and control the motor.
- **H-Bridge Selection:** Choose an H-Bridge module suitable for your motor's voltage and current ratings.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 H-Bridge Module](https://projectslearner.com/learn/esp8266-h-bridge-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner