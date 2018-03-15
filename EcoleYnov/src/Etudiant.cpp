/*
 * Etudiant.cpp
 *
 *  Created on: 15 mars 2018
 *      Author: Antoi
 */

#include "Etudiant.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
Etudiant::Etudiant() {
	// TODO Auto-generated constructor stub

}

Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}
float* Etudiant::setListeNote(float listeNote){
	this->listeNote = listeNote;
}
void Etudiant::saisie(){
	int note ;

	            cout << "Donner le nom :" ;

	            cin >> nom ;

	            cout << "Donner le prénom :" ;

	            cin >> prenom ;

	            cout << "Saisie des notes \n" ;

	            for (note = 0 ; note < 10 ; note++)

	            {

	                        cout << "Donner la note N°" << note<< " : " ;

	                        cin >>  setListeNote(note);

	            }

}

void Etudiant::afficher (){
	if (admis() == 1) {
		cout << "Vous êtes admis !" << endl;
	}
	else {
		cout << "Vous n'êtes pas admis !" << endl;
	}
}
int Etudiant::admis (){
	if (moyenne() >= 10) {
		return 1;
	}
		return 0;
}
const float Etudiant::getListeNote() const {
	return listeNote;
}

const std::string& Etudiant::getNom() const {
	return nom;
}

void Etudiant::setNom(const std::string& nom) {
	this->nom = nom;
}

const std::string& Etudiant::getPrenom() const {
	return prenom;
}

void Etudiant::setPrenom(const std::string& prenom) {
	this->prenom = prenom;
}
float Etudiant::moyenne (){
	float somme;
	for (auto &note : getListeNote()){
		somme += getListeNote(&note);
	}
	return (somme/10);
}
