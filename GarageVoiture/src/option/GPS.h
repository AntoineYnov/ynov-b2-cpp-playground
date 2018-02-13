/*
 * gps.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef OPTION_GPS_H_
#define OPTION_GPS_H_

class GPS {
	double const prix = 113.5;
public:
	GPS();
	virtual ~GPS();
	double getPrix() const;
};

#endif /* OPTION_GPS_H_ */
