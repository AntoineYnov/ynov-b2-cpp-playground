/*
 * Personne.h
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#include <string>
#ifndef PERSONNE_H_
#define PERSONNE_H_

class Personne {

private:
	string nom;
    string prenom;
    int age;

public:
	Personne();
	virtual ~Personne();

	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}

	const string& getPrenom() const {
		return prenom;
	}

	void setPrenom(const string& prenom) {
		this->prenom = prenom;
	}
};


#endif /* PERSONNE_H_ */
