#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick* leftJoy;
	Joystick* rightJoy;
	Button* buttonPiston1;
	Button* buttonPiston2;
	Button* buttonPiston3;

public:
	OI();
	Joystick* getLeftJoy();
	Joystick* getRightJoy();
	void extendPiston();
	~OI();
};

#endif  // OI_H
