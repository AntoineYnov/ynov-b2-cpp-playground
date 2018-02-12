/*
 * gestionnairePersonne.h
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#ifndef GESTIONNAIREPERSONNE_H_
#define GESTIONNAIREPERSONNE_H_

#include "Personne.h"
#include <iostream>

class GestionnairePersonne {
private:
	Personne tabPersonne[];
public:
	GestionnairePersonne();
	virtual ~GestionnairePersonne();

	const Personne*& getTabPersonne() const {
		return tabPersonne;
	}
	void add(){

		Personne david,antoine,jeremy;

		antoine.setNom("Genouin-Duhamel");
		antoine.setPrenom("Antoine");
		antoine.setAge(20);

		david.setNom("Genouin-Duhamel");
		david.setPrenom("David");
		david.setAge(15);

		jeremy.setNom("Nunes");
		jeremy.setPrenom("Jeremy");
		jeremy.setAge(22);
	}
};

#endif /* GESTIONNAIREPERSONNE_H_ */
