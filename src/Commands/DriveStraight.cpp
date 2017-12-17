#include "DriveStraight.h"

DriveStraight::DriveStraight() : myRobot(new RobotDrive(LEFTMOTORPORT, RIGHTMOTORPORT))
// DrivePID(new PIDController(0.1,0.0,0.01,drive->GetGyro(), drive->GetRightWheel())),
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
	angleStraight = 0.0;
	stopingDistance = 18.0;
	travelSpeed = -0.75;
	Kp = 0.2;
}

// Called just before this Command runs the first time
void DriveStraight::Initialize() {
	drive->GetGyro()->Reset();
}

// Called repeatedly when this Command is scheduled to run
void DriveStraight::Execute() {
	double currentAngle = drive->GetGyro()->GetAngle();
	myRobot->Drive(travelSpeed, -currentAngle*Kp);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveStraight::IsFinished() {
	if (drive->GetFrontUltra() > stopingDistance) {
		return false;
	}

	else {
		return true;
	}
}

// Called once after isFinished returns true
void DriveStraight::End() {
	myRobot->Drive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStraight::Interrupted() {

}
