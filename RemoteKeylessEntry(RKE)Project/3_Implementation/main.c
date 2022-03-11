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
	int state=0,old=0;

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
		state=button_count();

		switch (state){
			case 1:
				KeY=KEY_Encryption(state);
				if(KeY==1){
				ledon_1();
				ledon_2();
				ledon_3();
			    ledon_4();
				old=state;
				state=0;
				}
				break;
			case 2:
				KeY=KEY_Encryption(state);
				if(KeY==4){
				ledoff_1();
				ledoff_2();
				ledoff_3();
				ledoff_4();
				old=state;
				state=0;
				}
				break;
			case 3:
				KeY=KEY_Encryption(state);
				if(KeY==27){
				ledon_1();
				delay(100000000);
				ledon_2();
				delay(100000000);
				ledon_3();
				delay(100000000);
				ledon_4();
				old=state;
				state=0;
				}
				break;
			case 4:
				KeY=KEY_Encryption(state);
				if(KeY==256){
				ledon_4();
				delay(100000000);
				ledon_3();
				delay(100000000);
				ledon_2();
				delay(100000000);
				ledon_1();
				old=state;
				state=0;
				}
				break;
			default:
			old=0;
			break;

			}
		}


}


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

int button_count(){
	int count=0,i=0;
	for(i = 0 ; i < 50 ; i++){
		delay(15000000);
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
			{
				count++;


			}
	}
	return count;
}
int KEY_Encryption(int N){
	int K=1;
	for(int k=0;k<N;k++){
		K=K*N;
	}
	return K;

}
