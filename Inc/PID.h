#ifndef INC_PID_H_
#define INC_PID_H_
#include <read_tick.h>
#define T 0.01
float saturation();
float PID_Calculation(float setpoint_value,float current_value);
#endif /* INC_PID_H_ */
