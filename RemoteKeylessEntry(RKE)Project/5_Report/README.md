# Remote Keyless Entry(RKE) :

The term remote keyless system (RKS), also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically by proximity.
Widely used in automobiles, an RKS performs the functions of a standard car key without physical contact. When within a few yards of the car, pressing a button on the remote can lock or unlock the doors, and may perform other functions.


## Folder Description :
|   Folder Name        |      Description
|:-------------------- |:--------------------------
| 1_Requirements       | Detail documents about high and low level requirements
| 2_Architecture       | Structural and Flow  diagram of project
| 3_Implementation     | Detail coding
| 4_TestPlanAndOutput  | Include tables about test case
| 5_Report             | Detail about project
| 6_ImageAndVideo      | Image of output
| 7_Other              | References








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


# Requirements :


## High Level Requirements :

| ID | High Level Requirements       |
| -------- | ----------------------- |
| HLR1 | Window Status of the Car will be printed on it i.e Lock/Unlock. |
| HLR2 | Alarm Status of the Car will be printed. |
| HLR3 | It will print the Car Battery Information.|
| HLR4 | The Door Status of the Car will be printed on it and Glow these Approach lights for indication.|

## Low Level Requirements :
|ID	    | Low Level Requirements                                   |HLR ID
|:------|:---------------------------------------------------------|:----
|LLR01	| When you hit the button, all of the LEDs should turn on  |HLR01
|| All of the LEDs should be turned on at the same time i.e Green-on, Orange-on, Red-on, Blue-on|HLR01
|LLR02	|When you click the button, all of the LEDs should turn off at the same time                   |HLR02
|	|All the LED's should be turned off at the same time i.e Green-off, Orange-off, Red-off, Blue-off|HLR02
|LLR03	| When the button is pressed all the LED's shall be on           |HLR03
|| When the button is pressed LED's shall be on in clockwise direction |HLR03
|LLR04| When the button is pressed all the LED's shall be on   |HLR04
|| When the button is pressed LED's shall be on in anti-clockwise direction |HLR04


## S.W.O.T Analysis :
![image](https://user-images.githubusercontent.com/98873866/157827867-fa1aeed7-5a17-4c95-b4d7-5276ad38ec6a.png)

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

## 4W's and 1H
![image](https://user-images.githubusercontent.com/98873866/157827651-446caa09-70fe-49cf-a575-757ce84de1ff.png)


 ### Who :
 * owner of the vehicle

### What :
* Keyless entry systems are used to remotely lock, unlock and can
have various features.

### When :
* within a range of distance a button is pushed, it sends a coded signal by radio waves to a receiver unit in the car, which locks or unlocks the door And do the task require.
### Why :
* Remote keyless entry systems alarm the vehicle against theft and lock and unlock the doors.
### How :
* Keyless entry to a vehicle is usually attained by sending a radio frequency signal from a remote transmitter to the receiver in the car.

##  Architecture :
### Behavioral Diagram :
 ###  High Level Flow chart Behavioral Diagram :
 
 ![1](https://user-images.githubusercontent.com/98866993/157816512-175a7c00-e3c4-48c5-82c8-e4cbe82e1da8.png)
    
    
    
  ### Low Level Flow chart Behavioral Diagram :
  
  ![2](https://user-images.githubusercontent.com/98866993/157817268-67c7e941-462e-4658-ba39-1ebb7430ba9e.png)
    
## Structural Diagram :

### High Level UML Use Case Structural Diagram :
   
   ![3](https://user-images.githubusercontent.com/98866993/157818103-2dab6a64-23af-47cc-8419-c5d965bb818e.png)
   
### Low Level UML Use Case Structural Diagram :
   
![4](https://user-images.githubusercontent.com/98866993/157819131-c4893b9d-b2d1-412c-8aa4-b3e336db9351.png)

# Test Plan and Output
## High level test plan
| Test ID | Description | Input  |      Expected output | Actual output |
|---------:|:-----------:|:------------------:|:----------------:|:---------------|
| 01       | Lock        |  User presses button once | Lock the car | Lock the car |
| 02       | Unlock      | User presses button twice  | Unlock the car | Unlock the car |
| 03       | Alarm Activate / Deactivate |  User presses button three times | activate or deactivate alarm | activate or deactivate alarm |
| 04       | Approach light  |  User presses button four times | turn on approach light | turn on approach light |
| 03       | Alarm Activate / Deactivate |  User presses button three times | Activate or Deactivate alarm | Activate or Deactivate alarm |
| 04       | Approach light  |  User presses button four times | Turn on approach light | Turn on approach light |

## Low level test plan

| Test ID  | Description | Input |  Expected output | Actual output | Passed |
|------------:|:-----------------:|:----------------:|:-----------------:|:------------------:|:---------|
| 01 | check for lock | User presses button once | All LEDs should on | All LEDs should on | Pass |
| 02 | Check for unlock | User presses button twice | All LEDs should off | All LEDs should off | Pass |
| 03 | Check for alarm activate/deactivate | User presses button three times | LEDs should on clockwise | LEDs should on clockwise | Pass |
| 04 | Check for approach light | User presses button four times | LEDs should on anticlockwise |  LEDs should on anticlockwise | Pass|
