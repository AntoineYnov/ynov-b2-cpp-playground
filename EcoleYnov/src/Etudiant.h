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
public:
	float listeNote[];
	Etudiant();
	virtual ~Etudiant();

	void afficher();
	void saisie ();
	float moyenne ();
	int admis ();


	const std::string& getNom() const;

	void setNom(const std::string& nom);

	const std::string& getPrenom() const;

	void setPrenom(const std::string& prenom);
};

#endif /* ETUDIANT_H_ */
