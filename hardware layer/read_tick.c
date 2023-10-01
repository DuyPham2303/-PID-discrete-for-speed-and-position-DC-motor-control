#include <motor.h>
#include <read_tick.h>
extern TIM_HandleTypeDef htim1;
extern motor_init motor;
uint16_t read_current_tick_encoder(){
	motor.tick_current = __HAL_TIM_GET_COUNTER(&htim1);
	return motor.tick_current;
}
