/*
 * gestionnairePersonne.h
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#ifndef GESTIONNAIREPERSONNE_H_
#define GESTIONNAIREPERSONNE_H_
#include "vector"
#include "GestionnairePersonne.h"

#include "Personne.h"

class GestionnairePersonne {
private:
	std::vector<Personne> listPersonne;
public:
	void add();
};

#endif /* GESTIONNAIREPERSONNE_H_ */
