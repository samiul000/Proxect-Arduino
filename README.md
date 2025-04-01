
# Proxect Arduino

![Logo](https://support.arduino.cc/hc/article_attachments/12416033021852)

**Welcome to my Arduino projects repository! 🎉 Here, I share my journey of learning Arduino, along with the projects I've built along the way. My goal is to document my progress and help others who are also starting their Arduino journey. Feel free to explore, learn, and star the project if you find it helpful a bit! 🤖✨**

# 🔗Introduction to Arduino

Arduino is an open-source electronics platform that serves as the brain behind a vast array of interactive projects. Whether you're building a simple light system, a robot, or a complex IoT device, Arduino makes it possible to bring your creations to life. By combining microcontroller boards and user-friendly software (the Arduino IDE), Arduino allows anyone—from beginners to experts—to write and upload code to control sensors, motors, LEDs, and other electronic components.

The journey of Arduino started in 2005, thanks to the brilliant minds of Massimo Banzi and David Cuartielles at the Interaction Design Institute Ivrea in Italy. The goal was simple: create a tool that was affordable, accessible, and easy to use, especially for those without a background in engineering. With that vision, the first Arduino board—Arduino Serial—was born. This humble creation was built around an Atmel AVR microcontroller and quickly set the stage for the future of physical computing.

In 2006, Arduino embraced its open-source nature, allowing creators from around the globe to dive into the world of electronics. This decision amplified the community's impact, turning Arduino from a classroom tool into a global movement. By 2007, the Arduino UNO emerged as the most popular board, beloved for its simplicity and flexibility. It became the gateway for many into the world of programming and hardware.

As time passed, Arduino evolved in tandem with technological advancements. The 2010s saw a significant surge in its applications, particularly with the rise of the Internet of Things (IoT). Arduino began powering connected devices, transforming everyday objects into smart gadgets. The introduction of boards like the Arduino Leonardo and Arduino Due pushed the boundaries of what Arduino could do, adding features such as built-in USB capabilities and enhanced processing power.

Today, Arduino remains a dominant force in the maker and tech communities. It serves as both a learning tool and a launchpad for innovation. From robot prototypes to advanced IoT systems, Arduino continues to empower creators to make their dreams a reality—one project at a time. Whether you’re a student, hobbyist, or professional, Arduino’s open-source ecosystem ensures that anyone can join the movement and shape the future of technology.

# 🔗Specifications of Arduino(UNO R3)

1. **Microcontroller:** ATmega328P

2. **Clock Speed:** 16 MHz

3. **Flash Memory:** 32 KB (0.5 KB used by bootloader)

4. **SRAM:** 2 KB

5. **EEPROM:** 1 KB

6. **Digital I/O Pins:** 14 (6 PWM)

7. **Analog Input Pins:** 6

8. **Operating Voltage:** 5V

9. **Input Voltage (recommended):** 7-12V

10. **Current per I/O Pin:** 40 mA

11. **Communication:** UART, SPI, I2C

12. **USB Interface:** Type-B

# 🔗Pin Marking of Arduino(UNO R3)

![Arduino](https://components101.com/sites/default/files/component_pin/Arduino-UNO-Parts-Marking.jpg)

# 🔗Arduino programming

Arduino programming is done using Arduino C/C++ in the Arduino IDE or other compatible environments. Here’s a basic guide to getting started with Arduino programming.

## 1. Installing Arduino IDE

Download and install the Arduino IDE from [Arduino's official website](https://www.arduino.cc/).

![Arduino IDE](https://spiceman.net/wp-content/uploads/2022/10/arduino-program-writing-02.png)

Or You can use [PlatformIO](https://platformio.org/) (for **VSCode**)
![PlatformIO](https://platformio.org/images/platformio-ide-laptop.93fc8e69.png)

## 2. Structure of an Arduino Program

Every Arduino program (which is called **sketch** in Arduino Program) consists of two main functions:

```bash
void setup() {
  // Runs once when the Arduino starts
}

void loop() {
  // Runs repeatedly after setup()
}
```
**1. setup():** Initializes variables, pins, libraries, etc.

**2. loop():** Runs continuously until power is turned off.

## 3. Basic Commands
Here are some fundamental Arduino functions:
### Pin Mode
```bash
pinMode(LED_BUILTIN, OUTPUT);  // Set a pin as input or output
```
● ```INPUT``` – Read external signals.

● ```OUTPUT``` – Send signals to components.

● ```INPUT_PULLUP``` – Internal pull-up resistor enabled.
### Digital I\O
```bash
digitalWrite(13, HIGH);  // Turn pin 13 ON
digitalWrite(13, LOW);   // Turn pin 13 OFF

int buttonState = digitalRead(2);  // Read pin 2 (HIGH or LOW)
```
### Analog I\O
```bash
int sensorValue = analogRead(A0);   // Read analog pin A0 (0-1023)
analogWrite(9, 128);  // Write PWM signal (0-255) to pin 9
```
### Serial Communication
```bash
Serial.begin(9600);  // Start Serial Monitor at 9600 baud
Serial.println("Hello, Arduino!");  // Print message to Serial Monitor
```
![Serial Monitor](https://makeabilitylab.github.io/physcomp/arduino/assets/images/BlinkWithSerialPrint_OpenSerialMonitor.png)
![Serial Monitor](https://makeabilitylab.github.io/physcomp/arduino/assets/images/SerialPrintHelloWorld_SerialMonitor.png)

## 4. Simple LED Blink Example
```bash
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Set LED pin (Pin 13) as output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn LED ON
  delay(1000);  // Wait 1 second
  digitalWrite(LED_BUILTIN, LOW);  // Turn LED OFF
  delay(1000);  // Wait 1 second
}
```
## 5. Uploading Code to Arduino
1. **Connect** the Arduino board via USB.

2. **Select the correct board** (Tools > Board > Arduino Uno or the board you have).

3. **Select the correct port** (Tools > Port).

4. Click the **Upload** button.

# 🔗Resources
These are the resources that I have used to learn the Arduino:

**Youtube:** [Paul McWhorter's Arduino Tutorial](https://www.youtube.com/playlist?list=PLGs0VKk2DiYw-L-RibttcvK-WBZm8WLEP)

**Books:** [Beginnig Arduino Programming by **Brian Evans**](https://jvasconcellos.com.br/wp-content/uploads/2015/11/APRESS-Beginning-Arduino-Programming-2011.pdf)

**Simulation:** [TinkerCad](https://www.tinkercad.com/)







# 🔗 Links
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://amsamiul.wordpress.com/)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](www.linkedin.com/in/al-mahmud-samiul-120612313)

