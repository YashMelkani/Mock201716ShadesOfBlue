#include "TankDrive.h"
using namespace std;


TankDrive::TankDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drive);
}

// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
	double leftJoyRaw = oi->getLeftJoy()->GetY();
	double rightJoyRaw = oi->getRightJoy()->GetY();
	drive->tankDrive(leftJoyRaw, rightJoyRaw);

	double altitute = NetworkTablesInterface::getAltitude();
	double azimuth = NetworkTablesInterface::getAzimuth();
	double distance = NetworkTablesInterface::getDistance();
	std::string orientation = NetworkTablesInterface::getOrientation();

/*	This was to test CV
	cout << "Altitude: " << altitute << endl;
	cout << "Azimuth: " << azimuth << endl;
	cout << "Distance: " << distance << endl;
	cout << "Orientation: " << orientation << endl;
*/
}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
