/*
 * Garage.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef GARAGE_H_
#define GARAGE_H_
#include "vector"

#include "../voiture.garage/Voiture.h"

class Garage {
private:
	std::vector<Voiture> listVoiture;
public:
	Garage();
	virtual ~Garage();
	void addVoiture(Voiture voiture);
};

#endif /* GARAGE_H_ */
