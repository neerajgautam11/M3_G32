## Contents 
* Introduction
* Abstract
* Objective
* Current State of the art
* High Level Requierment
* Low Level Requierment
* SWOT Analysis
* 4W' and 1H
* Behavioural Flowchart
* Structural Diagram
* Test Plan And Output

# BI-COM System :

![BMW_KeyFob (1)](https://user-images.githubusercontent.com/98873866/158000009-ee22631e-53a6-4e14-b581-c86bbc4207e4.jpg)

 A BiCom system is the extention of the unidirectional RKE to bidirectional RKE system.
 ·      
* Keyfob -> car (like a unidirectional RKE system). 
* car -> keyfob (car status information for displaying on the keyfob by LED or
display).
* RKE transmission requires two components - a transmitter and a receiver. 
* Transmitter - RKE key fob, other ID device with RKE integrated 
* Receiver - Body Control ECU, other ECU with integrated RKE. 
* RKE operates by broadcasting radio waves on a particular frequency unidirectionally.


## Folder Description
|   Folder Name        |      Description           |  Contributed by |
|:-------------------- |:-------------------------- |:-----------------------|
| 1_Requirements       | Detail documents about high and low level requirements|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 2_Architecture       | Structural and Flow  diagram of project|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 3_Implementation     | Detail coding|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 4_TestPlanAndOutput  | Include tables about test case|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 5_Report             | Detail about project|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 6_ImageAndVideo      | Image of output|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|
| 7_Other              | References|Sanket Kamble, Neeraj Gautam, Anshul Thakur, Nehal Kamble|


## Introduction :
A bi-com lock, also known as keyless entry or remote central locking, is one that uses an electronic remote control as a key that is activated by a handheld device or automatically by proximity. An RKS, which is widely used in automobiles, accomplishes the tasks of a traditional car key without requiring physical touch. Pressing a button on the remote while within a few yards of the automobile can lock or unlock the doors, as well as conduct other operations.

## Abstract :
RKE systems employ encryption methods to prevent car thieves from intercepting and spoofing the telegrams. RKE systems operate by transmitting radio waves on a certain frequency unidirectionally.

## Objective :
1. When the Button is pressed ONCE, the car must be locked.
2. When the Button is pressed TWICE, the automobile must be opened.
3. When the Button is pressed THREE times, the alarm is activated or deactivated.
4. When the Button is pressed FOUR times, the automobile must be exposed to light.

## Current State of the Art :
1. The main focus is on wireless and remote control of the car.
2. The second area of focus is to give our car with security via a dependable Encryption System.
3. For the younger generation, a new generation of smart automobile concept.

## Requirements : 
### RKE (Bi-com system)

# High Level Requirements

| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | WINDOW STATUS OF THE CAR will be printed on it |
| HLR2 | ALARM STATUS OF THE CAR will be printed |
| HLR3 | It will print the CAR BATTERY INFORMATION |
| HLR4 | The DOOR STATUS OF THE CAR will be printed on it |

# Low Level Requirements
| ID         | Low Level Requirements for HLR1   | 
| --------    | ---------------          |  
| LLR1.1      | When you hit the button, all of the LEDs should turn on   | 
| LLR1.2      | All of the LEDs should be turned on at the same time i.e Green-on, Orange-on, Red-on, Blue-on|

| ID         | Low Level Requirements for HLR2   |  
|  --------     |  --------     | 
| LLR2.1        | When you click the button, all of the LEDs should turn off at the same time   |
| LLR2.2      | All the LED's should be turned off at the same time i.e Green-off, Orange-off, Red-off, Blue-off|


| Id          | Low Level Requirements for HLR3   |  
|  --------      |  --------       | 
| LLR3.1        | When the button is pressed all the LED's shall be on    |
| LLR3.2        | When the button is pressed LED's shall be on in clockwise direction | 

| ID          | Low Level Requirements for HLR4   |  
| --------    |  --------      |  
| LLR4.1        | When the button is pressed all the LED's shall be on    | 
| LLR4.2        | When the button is pressed LED's shall be on in anti-clockwise direction |




##  S.W.O.T Analysis :
![image](https://user-images.githubusercontent.com/98873866/157833021-3af01a62-64dd-4cc1-8822-ceed6a3105bb.png)

### Strength
* Optimized power and range.
* Advance security.
### Weakness
* Replacing a lost fob costs much more than a traditional key electronic components wear out over time, which then means replacement of either the key or system repair
### Opportunities
* Allow users to use their smartphones as keys, even controlling extra features like remote start from these handheld devices.
	
### Threats
* Thieves, however, are rising to the challenge, using radio transmitters to perform ‘relay’ car hacks to capture the signal from the car’s fob 
possibility for hackers to manipulate the technology and steal your vehicle.


## 5W's & 1H :

![image](https://user-images.githubusercontent.com/98873866/157835000-7bf33ed6-2dc1-41c7-82b1-933e75c7b107.png)


### WHAT:
* It is a feature which can be used to access your car remotly.

### WHO:
* The owner who has the key can access the car.

### WHEN:
* When the user will press the button on the key, it will open/lock the car.

### Why :
* Remote keyless entry systems alarm the vehicle against theft and lock and unlock the doors.

### HOW:
* By pressing the button on the key we access the car lock.





 ##  Behavioral Diagram
   ###  High Level Flow chart Behavioral Diagram :
   ![1](https://user-images.githubusercontent.com/98866993/157816512-175a7c00-e3c4-48c5-82c8-e4cbe82e1da8.png)
    
   ### Low Level Flow chart Behavioral Diagram :
   ![2](https://user-images.githubusercontent.com/98866993/157817268-67c7e941-462e-4658-ba39-1ebb7430ba9e.png)
    
 ## Structural Diagram
   ### High Level UML Use Case Structural Diagram :
   ![3](https://user-images.githubusercontent.com/98866993/157818103-2dab6a64-23af-47cc-8419-c5d965bb818e.png)

   ### Low Level UML Use Case Structural Diagram :
   ![4](https://user-images.githubusercontent.com/98866993/157819131-c4893b9d-b2d1-412c-8aa4-b3e336db9351.png)

## Block Diagram :
   ![BLOCK_](https://user-images.githubusercontent.com/98889318/157828596-7c1187ca-fa1b-42a7-ae69-b83c2f2fd717.png)
   
   
# Test Plan and Output 

## High Level Test Plan

| Test ID | Description | Input | Expected Output | Actual Output |
|---------:|:----------:|:------:|:--------------:|:---------------|
|01 | Print window status | User presses button once | Print window status of car | Print window status of car |
|02 | Print alarm status | User presses button twice | Print alarm status of car | Print alarm status of car |
|03 | Print car battery info | User presses button three times | Print car battery info |  Print car battery info |
|04 | Print door status | User presses button four times | Print door status of car | Print door status of car |

## Low Level Test Plan 

| Test ID | Description | Input | Expected Output | Actual Output | Passed |
|--------:|:-----------:|:-----:|:---------------:|:--------------:|:-------|
| 01      | check print window status |User presses button once| All LEDs should on | All LEDs should on | Passed :white_check_mark:|
|02 | Check print alarm status | User presses button twice | All LEDs should off | All LEDs should off | Passed :white_check_mark:|
|03 | Check print car battery info | User presses button three times | LEDs should on once clockwise | LEDs should on once clockwise | Passed:white_check_mark: |
|04 | check print door status |  User presses button four times | LEDs should on once anticlockwise | LEDs should on once anticlockwise | Passed :white_check_mark:|
