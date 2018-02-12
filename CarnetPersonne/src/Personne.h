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

	int getAge() const;

	void setAge(int age);

	const string& getNom() const;

	void setNom(const string& nom);

	const string& getPrenom() const;

	void setPrenom(const string& prenom);
};


#endif /* PERSONNE_H_ */
