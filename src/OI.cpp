#include "OI.h"
#include <WPILib.h>
#include "Commands/PistonExtend.h"
#include "Commands/PistonRetract.h"

OI::OI() :
		leftJoy(new Joystick(2)), rightJoy(new Joystick(1)),
		buttonPiston1(new JoystickButton(rightJoy, 1)),
		buttonPiston2(new JoystickButton(rightJoy, 1)),
		buttonPiston3(new JoystickButton(rightJoy, 1))
{
		buttonPiston1->WhileHeld(new PistonExtend(1));
		buttonPiston1->WhenReleased(new PistonRetract(1));
		buttonPiston2->WhileHeld(new PistonExtend(2));
		buttonPiston2->WhenReleased(new PistonRetract(2));
		buttonPiston1->WhileHeld(new PistonExtend(3));
		buttonPiston1->WhenReleased(new PistonRetract(3));
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
