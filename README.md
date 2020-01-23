# CSE-323-Operating_Systems_Design-Distance_measure_with_led_alarm
It's a simple Arduino Based Project of CSE-323 (Operating Systems Design) course what is able to calculate the distance of an object and also make an alarm with led.



![CSE-323 SMU1](https://user-images.githubusercontent.com/48995708/72976230-6728c700-3dfc-11ea-8e52-83a2b3c5acaa.jpg)

## Introduction :
In this project we works with Arduino. Here we build a device what is able to calculate a distance
of an object with LED and alarm. When an object is near to the device it gives us a LED signal
with alarm .Distance is shown in serial monitor of arduino. After that when that object is in another
distance then there will be a change of LED light and alarm. That means we will get different LED
signals with different alarm tones for different distances .Three different LED and alarm tone
works here. Finally when the object isn’t near to the device and not in the range what was declared
in our code then serial monitor show that object is Out of Range and there will be no LED light
signal with no alarm.


## Equipment List :
1. Arduino UNO
2. Ultrasonic Sensor (HC-SR04 )
3. Breadboard
4. Buzzer
5. LED ( Red , Green , White )
6. Resistor ( 330 Ohm )
7. Jumper Wires ( Male to Male )



![Equipments List](https://user-images.githubusercontent.com/48995708/72976462-d9011080-3dfc-11ea-9f8f-cb908781f5b1.png)



## Theory :

For this project at first we need to know what is microcontroller as it's a microcontroller base
project. A microcontroller is basically a small-scale computer with generalized (and
programmable) inputs and outputs. The inputs and outputs can be manipulated by and can
manipulate the physical world. Then we need to get some idea about Arduino. Arduino is an
open-source project that created microcontroller-based kits for building digital devices and
interactive objects that can sense and control physical devices. These systems provide sets of
digital and analog input/output (I/O) pins that can interface to various expansion boards (termed
shields) and other circuits. There are different types of Arduino according to number of inputs,
outputs, processors and factors.Some Arduino : Leonardo ,Due, Nano ,Micro, LilyPad ,Esplora
,Uno, Mini Pro .Here we works with Arduino Uno.
Arduino Uno : Invented / Launched in 2010 .The pins are in three groups: 14 digital pins , 6
analog pins , 6 PWM pins , Digital pin 0 & 1 is used for RX TX , 16MHz Clock speed , 32KB
Flash memory , 2KB SRAM , 1KB EEPROM , Input voltage 5-12V DC .
Ultrasonic Sensor (HC-SR04) : For this Project we use Ultrasonic Sensor .Ultrasonic Sensor
sends out a high-frequency sound pulse and then times how long it takes for the echo of the
sound to reflect back. The sensor has 2 openings on its front. One opening transmits ultrasonic
waves, (like a tiny speaker), the other receives them, (like a tiny microphone).The speed of
sound is approximately 340 meters per second in air. The ultrasonic sensor uses this information
along with the time difference between sending and receiving the sound pulse to determine the
distance to an object. It uses the following mathematical equation:
Distance = ( Time x Speed of Sound ) / 2


![Figure Sensor](https://user-images.githubusercontent.com/48995708/72976729-54fb5880-3dfd-11ea-9e5b-3094967fb163.png)


Buzzer : A buzzer or beeper is an audio signalling device which may be mechanical,
electromechanical, or piezoelectric (piezo for short). Typical uses of buzzers and beepers include
alarm devices, timers, and confirmation of user input such as a mouse click or keystroke. Here
we use a buzzer for this project.

LED : A light-emitting diode (LED) is a two-lead semiconductor light source. It is a p–n
junction diode that emits light when activated. When a suitable current is applied to the leads,
electrons are able to recombine with electron holes within the device, releasing energy in the
form of photons. We also some LED here.

Resistor : Resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias
active elements, and terminate transmission lines, among other uses. For this project we use
some resistors for our LED’s and Buzzer because LED’s and buzzer don’t need high voltage .If
we provide more voltage those equipment will be destroyed .So we use Resistors to control the
voltage.



## Setup :

1. Setup the Breadboard : At first take the 5 volt (Vcc) and ground (Gnd) from Arduino
using wires then connect to the breadboard. So there will be two connection (Vcc and
Gnd ) created in to the breadboard.

2. HC-SR04 Sensor : Attach the HC-SR04 sensor to the Breadboard .
- The Sensor VCC connect to the breadboards Vcc part (+)
- The Sensor GND connect to the breadboards Gnd part (-)
- The Sensor Trig connect to the Arduino Board Digital I/O 9
- The Sensor Echo connect to the Arduino Board Digital I/O 10

3. Buzzer : The Buzzer attach to the Breadboard. Buzzer’s long leg (+) connect to the
Arduino Board Digital pin 6. Short leg (-) connect to the breadboards Gnd part (-) with
one 330 Ohm resistor.

4. LED : Attach LED’s to the Breadboard. Here we use 3 LED ( Green , Red and White ) .
The LED short leg (-) connect to the breadboards Gnd part (-) with resistors and Long leg
( + ) connect to the Arduino Board. Use this process for all 3 LED’s.
- Green LED Long leg (+) connect to the Arduino Board Digital pin 7.
- Red LED Long leg (+) connect to the Arduino Board Digital pin 8.
- White LED Long leg (+) connect to the Arduino Board Digital pin 12.

Now setup is complete. Next need to upload the code into the Arduino Uno.



![Big Circuit - Copy](https://user-images.githubusercontent.com/48995708/72977074-ecf94200-3dfd-11ea-91a7-9bbeb5140f72.jpg)


## How it works :

After burning the code and supplying the power to the Arduino Uno board our project works.
When we place an object to the device between 0 to 10 c.m then the Red light turns on with a
buzzer alarm. After that if we move the object and place it between 10 to 20 c.m then the green
light turns on with a different buzzer alarm. Next when the distance will be 20 to 40 c.m. the white
light turns on with a buzzer alarm. Finally if that object’s distance is more than 40 c.m or less than
0 c.m then no led is on and there will be no alarm in buzzer. Serial monitor of our Arduino Software
then shows “ Out of Range “.On the other cases different LED’s will be on with different alarm
tone .Distance will be also displayed on the serial monitor. That’s all about this project.
We can use this to calculate the water level in our home or at the time of flood. Also it will be
used to detect any harmful object with a safe distance as there is an alarming system and LED
signal in this project.





                                    ********************** The End ***********************




