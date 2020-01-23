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




