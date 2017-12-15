#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	leftWheel(new CANTalon(LEFTMOTORPORT)),
	rightWheel(new CANTalon(RIGHTMOTORPORT)),
	frontUltra(new Ultrasonic(TRIGPIN, ECHOPIN)),
	gyro(new ADXRS450_Gyro()) {
	mult = -1;
	leftJoyRaw = 1;
	rightJoyRaw = 1;
	frontUltra->SetAutomaticMode(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftJoyRaw, double rightJoyRaw) {
	double leftSpeed = leftJoyRaw * mult;
	double rightSpeed = rightJoyRaw * mult;
	leftWheel->Set(leftSpeed);
	rightWheel->Set(rightSpeed);
}

double DriveTrain::GetFrontUltra(){
	return frontUltra->GetRangeInches();
}

CANTalon* DriveTrain::GetLeftWheel(){
	return leftWheel;
}

CANTalon* DriveTrain::GetRightWheel(){
	return rightWheel;
}

Gyro* DriveTrain::GetGyro(){
	return gyro;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

DriveTrain::~DriveTrain(){
	delete leftWheel;
	delete rightWheel;
}
