#include "PistonBoard.h"
#include "../RobotMap.h"
#include"WPILib.h"

PistonBoard::PistonBoard() : Subsystem("PistonBoard"),
	board1(new DoubleSolenoid(FORWARDCHANNEL1, REVERSECHANNEL1)),
	board2(new DoubleSolenoid(FORWARDCHANNEL2, REVERSECHANNEL2)),
	board3(new DoubleSolenoid(FORWARDCHANNEL3, REVERSECHANNEL3))
{

}

void PistonBoard::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

DoubleSolenoid* PistonBoard::GetBoard1(){
	return board1;
}

DoubleSolenoid* PistonBoard::GetBoard2(){
	return board2;
}

DoubleSolenoid* PistonBoard::GetBoard3(){
	return board3;
}


PistonBoard::~PistonBoard(){
	delete board1;
	delete board2;
	delete board3;
}
