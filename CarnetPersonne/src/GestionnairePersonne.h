/*
 * gestionnairePersonne.h
 *
 *  Created on: 12 f�vr. 2018
 *      Author: Antoi
 */
#ifndef GESTIONNAIREPERSONNE_H_
#define GESTIONNAIREPERSONNE_H_

#include "GestionnairePersonne.h"

#include "Personne.h"

class GestionnairePersonne {
private:
//	std::vector<Personne> listPersonne(20);
public:
	GestionnairePersonne();
	virtual ~GestionnairePersonne();
	void add();
};

#endif /* GESTIONNAIREPERSONNE_H_ */
