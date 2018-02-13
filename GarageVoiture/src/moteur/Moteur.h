/*
 * Moteur.h
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#ifndef MOTEUR_MOTEUR_H_
#define MOTEUR_MOTEUR_H_
#include <string>

class Moteur {
private:
//	TypeMoteur type;
	double prix;
	std::string cylindre;
public:
	Moteur();
	virtual ~Moteur();
	double getPrix();

	const std::string& getCylindre() const;

	void setCylindre(const std::string& cylindre);

	void setPrix(double prix);
};

#endif /* MOTEUR_MOTEUR_H_ */
