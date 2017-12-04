#include "CommandBase.h"

#include <Commands/Scheduler.h>



// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.



std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();
DriveTrain* CommandBase::drive = nullptr;

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}

void CommandBase::initialize() {
	drive = new DriveTrain();
}
