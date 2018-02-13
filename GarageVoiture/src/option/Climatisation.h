/*
 * Climatisation.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef OPTION_CLIMATISATION_H_
#define OPTION_CLIMATISATION_H_

class Climatisation {
private:
	double prix = 347.3;
public:
	Climatisation();
	virtual ~Climatisation();
	double getPrix() const;
};

#endif /* OPTION_CLIMATISATION_H_ */
