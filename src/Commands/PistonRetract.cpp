#include "PistonRetract.h"

PistonRetract::PistonRetract(int pistonNum) {
	Requires(pistonBoard);
	pistonNumber = pistonNum;
}

// Called just before this Command runs the first time
void PistonRetract::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void PistonRetract::Execute() {
	if(pistonNumber == 1){
		CommandBase::pistonBoard->GetBoard1()->Set(DoubleSolenoid::Value::kReverse);
	}
	else if(pistonNumber == 2){
		CommandBase::pistonBoard->GetBoard2()->Set(DoubleSolenoid::Value::kReverse);
	}
	else {		// Piston 3
		CommandBase::pistonBoard->GetBoard3()->Set(DoubleSolenoid::Value::kReverse);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool PistonRetract::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PistonRetract::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PistonRetract::Interrupted() {

}
