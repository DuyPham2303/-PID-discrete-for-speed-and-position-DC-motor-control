
#ifndef INC_SETTING_PID_H_
#define INC_SETTING_PID_H_
#include <read_tick.h>
void PID_INIT_PARAM(float setpoint_val,double kp,double ki,double kd);
void default_data();
#endif /* INC_SETTING_PID_H_ */
