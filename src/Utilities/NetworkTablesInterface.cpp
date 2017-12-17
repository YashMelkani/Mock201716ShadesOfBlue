
#include "NetworkTablesInterface.h"

/*NetworkTablesInterface::NetworkTablesInterface() {
 // TODO Auto-generated constructor stub

 }

 NetworkTablesInterface::~NetworkTablesInterface() {
 // TODO Auto-generated destructor stub
 }*/

double NetworkTablesInterface::getDistance() {
	return NetworkTable::GetTable("cv")->GetNumber("distance", -1.0);
	//returns true if the gear has been detected
}

double NetworkTablesInterface::getAltitude() {
	return NetworkTable::GetTable("cv")->GetNumber("altitude", -1.0);
}

double NetworkTablesInterface::getAzimuth() {
	return NetworkTable::GetTable("cv")->GetNumber("azimuth", -1.0);
}

std::string NetworkTablesInterface::getOrientation() {
	return NetworkTable::GetTable("cv")->GetString("orientation", "");
}

