/*
 * Voiture.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef VOITURE_H_
#define VOITURE_H_
#include "vector"
#include <string>
class Voiture {
private:
	double prix;
	std::string nom;
//List<Option> options;
// Marque nomMarque;
// Moteur moteur;
public:
	Voiture();
	virtual ~Voiture();
//	void addOption(Option opt);
};

#endif /* VOITURE_H_ */
