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
