#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
	leftWheel(new CANTalon(leftMotorPort)),
	rightWheel(new CANTalon(rightMotorPort)),
	frontUltra(new Ultrasonic(TrigPin, EchoPin)),
	gyro(new AnalogGyro(GyroPin)) {
	mult = -50;
	leftJoyRaw = 1;
	rightJoyRaw = 1;
	frontUltra->SetAutomaticMode(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TankDrive());

}

void DriveTrain::tankDrive(double leftJoyRaw, double rightJoyRaw) {
	double leftSpeed = leftJoyRaw*mult;
	double rightSpeed = rightJoyRaw*mult;
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

AnalogGyro* DriveTrain::GetGyro(){
	return gyro;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

DriveTrain::~DriveTrain(){
	delete leftWheel;
	delete rightWheel;
}
