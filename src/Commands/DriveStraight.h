#ifndef DriveStraight_H
#define DriveStraight_H

#include "../CommandBase.h"
#include "../Utilities/WVPIDController.h"
#include "TankDrive.h"
#include "RobotMap.h"

class DriveStraight : public CommandBase {
private:
	RobotDrive* myRobot;
	// PIDController* DrivePID;
	double angleStraight;
	double stopingDistance;
	double travelSpeed;
	double Kp;

public:
	DriveStraight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveStraight_H
