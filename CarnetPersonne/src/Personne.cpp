/*
 * Personne.cpp
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#include "Personne.h"

using namespace std;
Personne::Personne() {
	// TODO Auto-generated constructor stub
}

Personne::~Personne() {
	// TODO Auto-generated destructor stub
}
int Personne::getAge() const {
	return age;
}

void Personne::setAge(int age) {
	this->age = age;
}

const string& Personne::getNom() const {
	return nom;
}

void Personne::setNom(const string& nom) {
	this->nom = nom;
}

const string& Personne::getPrenom() const {
	return prenom;
}

void Personne::setPrenom(const string& prenom) {
	this->prenom = prenom;
}
