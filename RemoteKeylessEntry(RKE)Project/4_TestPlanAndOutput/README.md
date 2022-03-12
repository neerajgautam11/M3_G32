# Test Plan and Output
## High level test plan
| Test ID | Description | Input  |      Expected output | Actual output |
|:--------|:-----------|:-----------------|:----------------|:---------------|
| 01       | Lock        |  User presses button once | Lock the car | Lock the car |
| 02       | Unlock      | User presses button twice  | Unlock the car | Unlock the car |
| 03       | Alarm Activate / Deactivate |  User presses button three times | Activate or deactivate alarm | Activate or deactivate alarm |
| 04       | Approach light  |  User presses button four times | Turn on approach light | Turn on approach light |
| 03       | Alarm Activate / Deactivate |  User presses button three times | Activate or Deactivate alarm | Activate or Deactivate alarm |
| 04       | Approach light  |  User presses button four times | Turn on approach light | Turn on approach light |

## Low level test plan

| Test ID  | Description | Input |  Expected output | Actual output | Passed |
|------------:|:-----------------|:----------------|:-----------------|:------------------|:---------|
| 01 | Check for Lock | User presses button once | All LEDs should on | All LEDs should on | Passed :white_check_mark:|
| 02 | Check for Unlock | User presses button twice | All LEDs should off | All LEDs should off | Passed :white_check_mark:|
| 03 | Check for alarm activate/deactivate | User presses button three times | LEDs should on clockwise | LEDs should on clockwise | Passed :white_check_mark: |
| 04 | Check for approach light | User presses button four times | LEDs should on anticlockwise |  LEDs should on anticlockwise | Passed :white_check_mark:|


## When Blue button is pressed one time :
![Screenshot (104)](https://user-images.githubusercontent.com/98873866/158002319-9ffd98cf-553f-4c4a-a47f-68e09a3812bb.png)


## When Blue button is pressed two times :
![Screenshot (105)](https://user-images.githubusercontent.com/98873866/158002336-754635e6-86d8-4041-bd81-a530d0532e44.png)


## When Blue button is pressed three times (Led glows in Clockwise manner) :
![Screenshot (106)](https://user-images.githubusercontent.com/98873866/158002561-6e46b046-9460-4c3b-bb78-43fc00dd40c5.png)




## When Blue button is pressed four times (Led glows in Anti Clockwise manner):
#### To turn off the LED which were on after step 3
![Screenshot (107)](https://user-images.githubusercontent.com/98873866/158002580-acbb3cc7-1d27-4e82-8734-1dfd065fc801.png)

![Screenshot (109)](https://user-images.githubusercontent.com/98873866/158002359-46778be9-9855-45d7-8cd3-0d2b1d64bc4c.png)
