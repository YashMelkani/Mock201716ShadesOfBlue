#ifndef TankDrive_H
#define TankDrive_H
#include "iostream"
#include "WPILib.h"
#include "../CommandBase.h"
#include "Utilities/NetworkTablesInterface.h"

class TankDrive : public CommandBase {
public:
	TankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TankDrive_H
