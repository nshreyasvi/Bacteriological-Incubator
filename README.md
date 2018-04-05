# Bacteriological-Incubator
This project aims at making a low cost bacteriological incubator for helping people develop microorganism cultures at their homes with ease.

## Overview :
The microbiological incubator is deployed in research and industry in a wide variety of applications with living organisms. Cell cultures and micro-organisms must be incubated in a controlled atmosphere. 
Incubators are necessary equipment for any laboratory conducting cell culture and tissue culture work. They protect cells from changes in temperature, humidity, CO2 and O2.
Examples of applications in the incubator :
•	Growing cell cultures
•	Reproduction of germ colonies with subsequent germ count in the food industry
•	Reproduction of germ colonies and subsequent determination of biochemical oxygen demand (wastewater monitoring)
•	Reproduction of micro organisms such as bacteria, fungi, yeast or viruses
•	Breeding of insects and hatching of eggs in zoology
•	Controlled sample storage
•	Growing of crystals/protein crystals

However there are some disadvantages. They include:
- It is expensive to buy an incubator. Most of the incubators are highly priced and not     affordable to small scale industries. They usually range from 10,000 INR to 1,00,000 INR.
- It requires a lot of skills in order to manage and maintain an incubator.

In our project, we have made an incubator using thermocol ( Expanded Polystyrene ) which is cheaper, easily accessible, and can be used by anyone. 

## Construction and Description :
Our model consists of –
1)	Peltier tiles
2)	Arduino microcontroller 
3)	4 Relay module
4)	Thermocol
5)	Power supply (SMPS)
6)	Temperature Sensor

![alt text](https://preview.ibb.co/kos7sH/20180403_140213.jpg)

1) **Peltier tile** - Thermoelectric coolers operate according to the Peltier effect. The effect creates a temperature difference by transferring heat between two electrical junctions. When the current flows through the junctions of the two conductors, heat is removed at one junction and cooling occurs.

2) **Arduino microcontroller** - The Arduino Uno R3  a microcontroller board based on the ATmega328. It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller; simply connect it to a computer with a USB cable or power it with a AC-to-DC adapter or battery to get started.

3) **SMPS** - A switched-mode power supply is an electronic power supply that incorporates a switching regulator to convert electrical power efficiently. 

4) **Relay module** - A relay is an electrically operated switch of mains voltage.It means that it can be turned on or off, letting the current to go through or not. Controlling a relay with the Arduino is as simple as controlling an output such as an LED. 
In relation to mains voltage, relays have 3 possible connections : 
- **COM**: common pin
- **NO (Normally Open)**: there is no contact between the common pin and the normally open pin. So, when you trigger the relay, it connects to the COM pin and supply is provided to a load
- **NC (Normally Closed)**: there is contact between the common pin and the    normally closed pin. There is always connection between the COM and NC pins, even when the relay is turned off. When you trigger the relay, the circuit    is opened and there is no supply provided to a load.
           
5) **Thermocol** – The main benefit of using thermocol is that it is inexpensive and it  provides high thermal resistance, so it does not allow the heat to escape out. It can withstand temperature in the range of -50 °C to 75 °C.

![alt text](https://preview.ibb.co/jG9LCH/20180403_135538.jpg)

As shown in the circuit diagram above, we have an SMPS ( i.e; power supply) which is provided with 4 channels having positive and negative terminals. Using wires, we connect the positive terminal of the SMPS to the COM pin of one of the relays. The negative terminal of SMPS is connected to one end of the Peltier tile and the other end is connected to the NC pin of the relay module. This step is repeated for all the 4 relays. This relay module is then connected to the Arduino Uno microcontroller. Using the controller, we can regulate the temperature control through the temperature sensor system. 

![alt text](https://preview.ibb.co/jjktXH/20180403_140019.jpg)

## Working : 
When the power is supplied (SMPS converts the current efficiently), current passes through the relay module. The relay module is operated through the Arduino Uno microcontroller (using a software program in Laptop). This relay module acts as an electrical switch which allows only specific current to pass through the peltier tiles. If the current is made to pass through only one relay, then only one Peltier tile gets heated. Similarly if the current is made to pass through all the relays, then all the tiles get heated. If a Peltier element is energised, one side is cooled and the opposite side simultaneously heats up. Simply by reversing the polarity of the supply voltage, the hot and cold sides of the Peltier element can be swapped. The advantages of Peltier technology lie in a low energy consumption in partial load operation, a low noise level and high control precision. Since cooled incubators with Peltier elements work almost without any vibration, they are particularly suitable for protein crystallography and breeding insects.
Using the software program, we can control and regulate the temperature settings as required inside the incubator. The temperature readings can be noted down using the temperature sensor which is connected outside the incubator.



## Uniqueness of the project :
The whole model is built on a thermocol which offers a lot of advantages like –  Lightweight and easy to handle, Strong and durable, Excellent thermal resistance, Low water absorption, Buoyant, Not subjected to deterioration by insects and rodents, Low combustibility, Able to absorb shocks and vibrations, Non-abrasive and non-corrosive, Excellent chemical resistance.
Unlike other Laboratory incubators which are expensive, our model is very cheap when compared to them.
