# arduino-parking-sensors

## **INTRODUCITON**

Making Proximity Sensors with the Arduino Mega 2560 is a project carried out in the Embedded Systems university course that wants to help approximate the distance between obstacles encountered by a vehicle or other moving body.
As the project is inspired by the conventional parking systems of today's cars, it aims to solve the problem of cars that do not have such a built-in system to assist the driver in carrying out various maneuvers, especially those of parking (parking facing , rear parking and side parking ).

## **HOW IT WORKS?**

The three ultrasonic sensors measure the distance to a certain obstacle using ultrasound. They work through a "transceiver-receiver" type system. The transceiver which is represented by a pin called "Trigger", sends an ultrasonic signal that when it hits an obstacle, the ultrasonic sound returns and is picked up by a second pin called "Echo" which has the role of receiver. The information retrieved by the Echo is then transformed by the software into centimeters and displayed on the serial port.
The data is then transmitted to the Arduino Mega development board using jumper wires that are connected to various pins of the board. The Arduino Mega is basically the brain of the whole system. It receives and transmits data, powers and programs the various components of the embedded system.
With the help of the software component, the data taken from the 3 ultrasonic sensors are sent to an OLED display through 1 SCL and 1 SDA pins, on which an approximate measurement interface of the distance to the obstacle is displayed through 4 lines placed on 3 columns. Depending on the distance at which the embedded system is from the obstacle, the 4 lines are solid, if the object is far, and hatched, if the obstacle is close.
The OLED display is doubled by 3 RGB LEDs and an Active Buzzer. The LEDs change colors based on the distance the obstacle is from the ultrasonic sensor it is paired with. Green represents the distance at which the vehicle is at the safest distance from the obstacle, followed by yellow, red, and if the obstacle is too close, the RGB LED will turn white.
The Active Buzzer works on the same principle as the 3 RGB LEDs, except that it uses sound-type signals that are increasingly frequent as the distance between the object and the embedded system decreases. In addition, the active buzzer is assigned to all 3 ultrasonic sensors, thus triggering regardless of which sensor is activated.
The 9 resistors with 5 bands of 220 ohm each have the role of protecting the 3 RGB LEDs.

## **HARDWARE USED**

- 1x Arduino Mega 2560 Development Board
- 3x HC-SR04 ultrasonic sensors
- 1x OLED Display 0.96 inch SSD1306
- 1x Active Buzzer
- 3x RGB LEDs
- 9x 220 ohm resistors
- 20x Jumper wires

## **VIDEO DEMO**

https://github.com/sebidieter26/arduino-parking-sensors/assets/107187446/11d9d3d6-7338-4b6b-b0e7-8637000ee782

