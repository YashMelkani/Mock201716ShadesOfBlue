#include "PistonExtend.h"

PistonExtend::PistonExtend(int pistonNum) {
	Requires(pistonBoard);
	pistonNumber = pistonNum;
}

// Called just before this Command runs the first time
void PistonExtend::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void PistonExtend::Execute() {
	if(pistonNumber == 1){
		CommandBase::pistonBoard->GetBoard1()->Set(DoubleSolenoid::Value::kForward);
	}
	else if(pistonNumber == 2){
		CommandBase::pistonBoard->GetBoard2()->Set(DoubleSolenoid::Value::kForward);
	}
	else{		// Piston 3
		CommandBase::pistonBoard->GetBoard3()->Set(DoubleSolenoid::Value::kForward);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool PistonExtend::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PistonExtend::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PistonExtend::Interrupted() {

}
