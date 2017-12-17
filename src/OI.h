#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick* leftJoy;
	Joystick* rightJoy;
public:
	OI();
	Joystick* getLeftJoy();
	Joystick* getRightJoy();
	~OI();
};

#endif  // OI_H
