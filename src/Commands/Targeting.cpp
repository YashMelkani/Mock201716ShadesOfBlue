#include "Targeting.h"

Targeting::Targeting() : myRobot(new RobotDrive(LEFTMOTORPORT, RIGHTMOTORPORT)){
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
	travelSpeed = 0.5;
	Kp = -0.2;
}

// Called just before this Command runs the first time
void Targeting::Initialize() {
	drive->GetGyro()->Reset();
}

// Called repeatedly when this Command is scheduled to run
void Targeting::Execute() {
	double currentAngle = drive->GetGyro()->GetAngle();
	myRobot->Drive(travelSpeed, -currentAngle*Kp);
}

// Make this return true when this Command no longer needs to run execute()
bool Targeting::IsFinished() {
	if (NetworkTablesInterface::getDistance() == -1.0){
		return false;
	}
	else {
		return true;
	}
}

// Called once after isFinished returns true
void Targeting::End() {
	myRobot->Drive(0, 0);
	CommandBase::pistonBoard->GetBoard1()->Set(DoubleSolenoid::Value::kForward); // THIS PNEUMATIC HAS TO BE THE ONE WHICH CAN PUSHE THE TARGET.
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Targeting::Interrupted() {

}
