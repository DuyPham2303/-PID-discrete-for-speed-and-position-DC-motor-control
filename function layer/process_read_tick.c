#include <motor.h>
#include <process_read_tick.h>
#include "main.h"
extern motor_init motor;
float calculate_current_angle(){
	float current_angle = 0;
	static int16_t tick_current = 0;
	tick_current = read_current_tick_encoder();
	current_angle = (tick_current * 360.0) / tick_per_revolution;
	return current_angle;
}
float calculate_current_speed(){
	float current_speed = 0;
	static int16_t tick_current = 0;
	tick_current = read_current_tick_encoder();
	float tick_cnt = tick_current - motor.tick_pre; // ticks per 10 ms
	current_speed = (tick_cnt * 60.0)/(tick_per_revolution * T);
	motor.tick_pre = tick_current;
	return current_speed;
}
