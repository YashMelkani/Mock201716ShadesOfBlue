#ifndef PistonBoard_H
#define PistonBoard_H

#include <Commands/Subsystem.h>
#include <RobotMap.h>
#include "WPILib.h"


class PistonBoard : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DoubleSolenoid* board1;
	DoubleSolenoid* board2;
	DoubleSolenoid* board3;
public:
	PistonBoard();
	DoubleSolenoid* GetBoard1();
	DoubleSolenoid* GetBoard2();
	DoubleSolenoid* GetBoard3();
	void InitDefaultCommand();
	~PistonBoard();
};

#endif  // PistonBoard_H
