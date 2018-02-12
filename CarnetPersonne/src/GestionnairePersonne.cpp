/*
 * gestionnairePersonne.cpp
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */

#include "GestionnairePersonne.h"

GestionnairePersonne::GestionnairePersonne() {
	// TODO Auto-generated constructor stub

}

GestionnairePersonne::~GestionnairePersonne() {
	// TODO Auto-generated destructor stub
}

void GestionnairePersonne::add(){

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
