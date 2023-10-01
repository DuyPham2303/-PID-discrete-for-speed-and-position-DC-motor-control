#include <motor.h>
#include"reset_data.h"
extern TIM_HandleTypeDef htim2;
extern motor_init motor;
void default_data(){
		TIM1->CNT = 0;
		motor.error_pre1 = 0;
		motor.error_pre2 = 0;
		motor.output_pwm = 0;
		motor.tick_current = 0;
		motor.tick_pre = 0;
		motor.error_value = 0;
		motor.last_output_pwm = 0;
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,0);
}
