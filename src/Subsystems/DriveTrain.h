#ifndef DriveTrain_H
#define DriveTrain_H
#include <ctrlib/CANTalon.h>
#include "WPILib.h"

#include <Commands/Subsystem.h>

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* leftWheel;
	CANTalon* rightWheel;
	Ultrasonic* frontUltra;
	AnalogGyro* gyro;
	double leftJoyRaw;
	double rightJoyRaw;
	double mult;
public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double leftJoyRaw, double rightJoyRaw);
	CANTalon* GetLeftWheel();
	CANTalon* GetRightWheel();
	double GetFrontUltra();
	AnalogGyro* GetGyro();
	~DriveTrain();
};

#endif  // DriveTrain_H
