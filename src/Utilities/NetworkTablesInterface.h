/*
 * NetworkTablesInterface.h
 *
 *  Created on: Jan 17, 2017
 *      Author: Dhruti
 */

#ifndef UTILITIES_NETWORKTABLESINTERFACE_H_
#define UTILITIES_NETWORKTABLESINTERFACE_H_

#include "NetworkTables/NetworkTable.h"


class NetworkTablesInterface {
public:
	//NetworkTablesInterface(); NOT REQUIRED
	//virtual ~NetworkTablesInterface(); NOT REQUIRED
	//distance, altitude, azimuth --> double
	//orientation--> string
	static double getDistance();
	static double getAltitude();
	static double getAzimuth();
	static std::string getOrientation();
};

#endif /* UTILITIES_NETWORKTABLESINTERFACE_H_ */
