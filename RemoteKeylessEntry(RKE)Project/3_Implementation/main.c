/**
 * @file main.c
 * @author Module3-Group32 (Sanket kamble, Nehal kamble, Neeraj Gautam, Anshul Thakur)
 * @brief 
 * @version 0.1
 * @date 2022-03-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "MyStm32f407xx.h"

#define BTN_PRESSED ENABLE
#define BTN_UNPRESSED DISABLE

void ledon_1(void);
void ledon_2(void);
void ledon_3(void);
void ledon_4(void);
void ledoff_1(void);
void ledoff_2(void);
void ledoff_3(void);
void ledoff_4(void);
int button_count(void);
int KEY_Encryption(int);
void delay(uint32_t count)
{
  for(uint32_t i = 0 ; i < count ; i++);
}

int main(void)
{
	int KeY=0;
	int flag =0,old=0;

	GPIO_Handle_t GPIOBtn;



	GPIOBtn.pGPIOx = GPIOA;
	GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA,ENABLE);
	GPIO_Init(&GPIOBtn);

	while(1)
	{
		flag=button_count();

		switch (flag ){
			case 1:
				KeY=KEY_Encryption(flag );
				if(KeY==1){
				ledon_1();
				ledon_2();
				ledon_3();
			    ledon_4();
				old=flag ;
				flag =0;
				}
				break;
			case 2:
				KeY=KEY_Encryption(flag );
				if(KeY==4){
				ledoff_1();
				ledoff_2();
				ledoff_3();
				ledoff_4();
				old=flag ;
				flag =0;
				}
				break;
			case 3:
				KeY=KEY_Encryption(flag );
				if(KeY==27){
				ledon_1();
				delay(100000000);
				ledon_2();
				delay(100000000);
				ledon_3();
				delay(100000000);
				ledon_4();
				old=flag ;
				flag =0;
				}
				break;
			case 4:
				KeY=KEY_Encryption(flag );
				if(KeY==256){
				ledon_4();
				delay(100000000);
				ledon_3();
				delay(100000000);
				ledon_2();
				delay(100000000);
				ledon_1();
				old=flag ;
				flag =0;
				}
				break;
			default:
			old=0;
			break;

			}
		}


}

//It turns on Green Led
void ledon_1(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, ENABLE);
}

//It turns on Orange Led 
void ledon_2(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, ENABLE);
}

//It turns on Red Led
void ledon_3(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, ENABLE);
}

//It turns on Blue Led
void ledon_4(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, ENABLE);
}

//It turns off Green Led
void ledoff_1(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
}

//It turns off Orange Led
void ledoff_2(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
}

//It turns off Red Led
void ledoff_3(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, DISABLE);
}

//It turns off Blue Led
void ledoff_4(){
	GPIO_Handle_t GpioLed;

		GpioLed.pGPIOx = GPIOD;
		GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
		GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
		GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
		GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
		GPIO_PeriClockControl(GPIOD,ENABLE);
		GPIO_Init(&GpioLed);
		//GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
		GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
}

//It counts the number of presses of Blue push Button
int button_count(){

	//int temp=100000;
	//int count=0;
	/*while(temp){
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
					{
						count++;
						ledon_4();
						delay(15000000);
					}
		temp--;
	}*/
	int count=0,i=0;
	for(i = 0 ; i < 500000 ; i++){
		delay(1500);
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
				count++;
				delay(40000000);



			}
	}
	return count;
}

//Its encrypt the data by N*N algorithm
int KEY_Encryption(int N){
	int K=1;
	for(int k=0;k<N;k++){
		K=K*N;
	}
	return K;

}
