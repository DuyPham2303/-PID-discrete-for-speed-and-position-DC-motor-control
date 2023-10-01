#ifndef INC_PROCESS_READ_TICK_H_
#define INC_PROCESS_READ_TICK_H_
#include <read_tick.h>
#include"main.h"
uint16_t read_current_tick_encoder();
float calculate_current_angle();
float calculate_current_speed();
void control_motor(float duty_cycle);
#endif /* INC_PROCESS_READ_TICK_H_ */
