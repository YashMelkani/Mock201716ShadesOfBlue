#ifndef Targeting_H
#define Targeting_H

#include "../CommandBase.h"
#include "TankDrive.h"
#include "RobotMap.h"
#include "Utilities/NetworkTablesInterface.h"

class Targeting : public CommandBase {
private:
	RobotDrive* myRobot;
	double travelSpeed;
	double Kp;

public:
	Targeting();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Targeting_H
