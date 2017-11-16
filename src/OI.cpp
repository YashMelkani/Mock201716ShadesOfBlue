#include "OI.h"

#include <WPILib.h>

OI::OI() :
		leftJoy(new Joystick(2)), rightJoy(new Joystick(1))
{
	// Process operator interface input here.
}

Joystick* OI::getLeftJoy(){
	return leftJoy;
}

Joystick* OI::getRightJoy(){
	return rightJoy;
}

OI::~OI(){
	delete leftJoy;
	delete rightJoy;
}
