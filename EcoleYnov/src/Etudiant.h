/*
 * Etudiant.h
 *
 *  Created on: 15 mars 2018
 *      Author: Antoi
 */

#ifndef ETUDIANT_H_
#define ETUDIANT_H_

#include <string>
class Etudiant {

private:
	std::string nom;
	std::string prenom;
	float listeNote[];
protected:
	Etudiant();
	virtual ~Etudiant();

	void afficher();
	void saisie ();
	float moyenne ();
	int admis ();
	float* setListeNote(float listeNote);
	const float* Etudiant::getListeNote() const;

	const std::string& Etudiant::getNom() const;

	void Etudiant::setNom(const std::string& nom);

	const std::string& Etudiant::getPrenom() const;

	void Etudiant::setPrenom(const std::string& prenom);
};

#endif /* ETUDIANT_H_ */
