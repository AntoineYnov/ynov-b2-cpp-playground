/*
 * gestionnairePersonne.h
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#ifndef GESTIONNAIREPERSONNE_H_
#define GESTIONNAIREPERSONNE_H_

#include <iostream>

#include "GestionnairePersonne.h"
#include "Personne.h"
class GestionnairePersonne {
private:
	Personne tabPersonne[];
public:
	GestionnairePersonne();
	virtual ~GestionnairePersonne();

	const Personne*& getTabPersonne() const {
//		return tabPersonne;
	}
	void add(){

		Personne david,antoine,jeremy;

		antoine.setNomPersonnage("Genouin-Duhamel");
		antoine.setPrenomPersonnage("Antoine");
		antoine.setAge(20);

		david.setNomPersonnage("Genouin-Duhamel");
		david.setPrenomPersonnage("David");
		david.setAge(15);

		jeremy.setNomPersonnage("Nunes");
		jeremy.setPrenomPersonnage("Jeremy");
		jeremy.setAge(22);
	}
};

#endif /* GESTIONNAIREPERSONNE_H_ */
