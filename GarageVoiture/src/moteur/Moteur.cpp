/*
 * Moteur.cpp
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#include "Moteur.h"

Moteur::Moteur() {
	// TODO Auto-generated constructor stub

}

Moteur::~Moteur() {
	// TODO Auto-generated destructor stub
}
double Moteur::getPrix(){
		return prix;
	}

const std::string& Moteur::getCylindre() const {
	return cylindre;
}

void Moteur::setCylindre(const std::string& cylindre) {
	this->cylindre = cylindre;
}

void Moteur::setPrix(double prix) {
	this->prix = prix;
}
