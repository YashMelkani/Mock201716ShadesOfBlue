#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

const int TRIGPIN = 1;
const int ECHOPIN = 2;
const int GyroPin = 3;

const int RIGHTMOTORPORT = 0;
const int LEFTMOTORPORT = 4;

const int FORWARDCHANNEL1 = 2;
const int REVERSECHANNEL1 = 3;

const int FORWARDCHANNEL2 = 4;
const int REVERSECHANNEL2 = 5;

const int FORWARDCHANNEL3 = 6;
const int REVERSECHANNEL3 = 7;

#endif  // ROBOTMAP_H
