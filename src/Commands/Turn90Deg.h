#ifndef Turn90Deg_H
#define Turn90Deg_H

#include "../CommandBase.h"

class Turn90Deg : public CommandBase {
private:
	double turnSpeed;
public:
	Turn90Deg();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Turn90Deg_H
