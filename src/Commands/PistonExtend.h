#ifndef PistonExtend_H
#define PistonExtend_H

#include "../CommandBase.h"
#include "WPILib.h"

class PistonExtend : public CommandBase {
private:
	int pistonNumber;
public:
	PistonExtend(int pistonNum);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // PistonExtend_H
