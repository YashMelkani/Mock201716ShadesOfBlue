#ifndef DriveStraight_H
#define DriveStraight_H

#include "../CommandBase.h"
#include "../Utilities/WVPIDController.h"
#include "TankDrive.h"

class DriveStraight : public CommandBase {
private:
	WVPIDController* driveStraightPID;
	double speed;
public:
	DriveStraight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveStraight_H
