#include "Turn90Deg.h"

Turn90Deg::Turn90Deg() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	turnSpeed = 20;
}

// Called just before this Command runs the first time
void Turn90Deg::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Turn90Deg::Execute() {
	drive->GetLeftWheel()->Set(turnSpeed);
	drive->GetRightWheel()->Set(-turnSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool Turn90Deg::IsFinished() {
	double currentAngle = drive->GetGyro()->GetAngle();
	if (currentAngle >= 90 or -currentAngle >= 90) {
		return true;
	}
	else {
		return false;
	}
}

// Called once after isFinished returns true
void Turn90Deg::End() {
	drive->GetLeftWheel()->Set(turnSpeed);
	drive->GetRightWheel()->Set(-turnSpeed);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn90Deg::Interrupted() {

}
