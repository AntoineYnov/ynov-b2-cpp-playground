/*
 * Personne.cpp
 *
 *  Created on: 12 févr. 2018
 *      Author: Antoi
 */
#include "Personne.h"

using namespace std;

int Personne::getAge() const {
	return age;
}

void Personne::setAge(int age) {
	this->age = age;
}

const std::string& Personne::getNomPersonnage() const {
	return nomPersonnage;
}

void Personne::setNomPersonnage(const std::string& nomPersonnage) {
	this->nomPersonnage = nomPersonnage;
}

const std::string& Personne::getPrenomPersonnage() const {
	return prenomPersonnage;
}

void Personne::setPrenomPersonnage(const std::string& prenomPersonnage) {
	this->prenomPersonnage = prenomPersonnage;
}
