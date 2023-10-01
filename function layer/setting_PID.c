#include <motor.h>
#include <setting_PID.h>
#include "reset_data.h"
extern TIM_HandleTypeDef htim2;
extern motor_init motor;
void PID_INIT_PARAM(float setpoint_val,double kp,double ki,double kd){
	motor.setpoint_val = setpoint_val;
	motor.kp = kp;
	motor.ki = ki;
	motor.kd = kd;
	default_data();
}
