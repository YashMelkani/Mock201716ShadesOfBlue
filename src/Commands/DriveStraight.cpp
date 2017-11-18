#include "DriveStraight.h"

DriveStraight::DriveStraight() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
	driveStraightPID = nullptr;
	speed = 10.0;
}

// Called just before this Command runs the first time
void DriveStraight::Initialize() {
	driveStraightPID = new WVPIDController(1.3,0.5,0.2,speed,false);

}

// Called repeatedly when this Command is scheduled to run
void DriveStraight::Execute() {
double currentPowerL = drive->GetLeftWheel()->GetSpeed();
double currentPowerR = drive->GetRightWheel()->GetSpeed();

double newPowerL = driveStraightPID->Tick(currentPowerL);
double newPowerR = driveStraightPID->Tick(currentPowerR);

drive->tankDrive(newPowerL,newPowerR);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveStraight::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveStraight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveStraight::Interrupted() {

}
