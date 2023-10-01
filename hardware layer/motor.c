#include <motor.h>
#include"stm32f1xx_hal_conf.h"
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;
motor_init motor;
void init_motor(GPIO_TypeDef* motor_ENA,uint16_t motor_ENA_pin,
				GPIO_TypeDef* motor_ENB,uint16_t motor_ENB_pin,
				uint32_t Encoder_A_channel,
				uint32_t Encoder_B_channel,
				uint32_t PWM_channel){
	motor.motor_ENA = motor_ENA;
	motor.motor_ENB = motor_ENB;
	motor.motor_ENA_pin = motor_ENA_pin;
	motor.motor_ENB_pin = motor_ENB_pin;
	motor.Encoder_A_channel = Encoder_A_channel;
	motor.Encoder_B_channel = Encoder_B_channel;
	motor.PWM_channel = PWM_channel;
	HAL_TIM_Encoder_Start(&htim1,motor.Encoder_A_channel | motor.Encoder_B_channel);
	HAL_TIM_PWM_Start(&htim2,motor.PWM_channel);
}
void motor_run_CW(){
	HAL_GPIO_WritePin(motor.motor_ENA,motor.motor_ENA_pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(motor.motor_ENB,motor.motor_ENB_pin,GPIO_PIN_RESET);
}
void motor_run_CCW(){
	HAL_GPIO_WritePin(motor.motor_ENA,motor.motor_ENA_pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(motor.motor_ENB,motor.motor_ENB_pin,GPIO_PIN_SET);
}
void motor_stop(){
	HAL_GPIO_WritePin(motor.motor_ENA,motor.motor_ENA_pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(motor.motor_ENB,motor.motor_ENB_pin,GPIO_PIN_RESET);
}
