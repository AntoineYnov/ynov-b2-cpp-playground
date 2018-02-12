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
public:
	int getAge() const;

	void setAge(int age);

	void setNomPersonnage(const std::string& nomPersonnage);
	const std::string& getNomPersonnage() const;

	void setPrenomPersonnage(const std::string& prenomPersonnage);
	const std::string& getPrenomPersonnage() const;

private:
	std::string nomPersonnage;
	std::string prenomPersonnage;
    int age;
};


#endif /* PERSONNE_H_ */
