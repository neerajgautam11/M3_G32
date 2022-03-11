# Test Plan and Output
## High level test plan
| Test ID | Description | Input  |      Expected output | Actual output |
|:--------|:-----------|:-----------------|:----------------|:---------------|
| 01       | Lock        |  User presses button once | Lock the car | Lock the car |
| 02       | Unlock      | User presses button twice  | Unlock the car | Unlock the car |
| 03       | Alarm Activate / Deactivate |  User presses button three times | activate or deactivate alarm | activate or deactivate alarm |
| 04       | Approach light  |  User presses button four times | turn on approach light | turn on approach light |
| 03       | Alarm Activate / Deactivate |  User presses button three times | Activate or Deactivate alarm | Activate or Deactivate alarm |
| 04       | Approach light  |  User presses button four times | Turn on approach light | Turn on approach light |

## Low level test plan

| Test ID  | Description | Input |  Expected output | Actual output | Passed |
|------------:|:-----------------|:----------------|:-----------------|:------------------|:---------|
| 01 | Check for lock | User presses button once | All LEDs should on | All LEDs should on | Passed :white_check_mark:|
| 02 | Check for unlock | User presses button twice | All LEDs should off | All LEDs should off | Passed :white_check_mark:|
| 03 | Check for alarm activate/deactivate | User presses button three times | LEDs should on clockwise | LEDs should on clockwise | Passed :white_check_mark: |
| 04 | Check for approach light | User presses button four times | LEDs should on anticlockwise |  LEDs should on anticlockwise | Passed :white_check_mark:|

