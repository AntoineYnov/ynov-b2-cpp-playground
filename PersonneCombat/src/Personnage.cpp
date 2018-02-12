#include "Personnage.h"

using namespace std;

void Personnage::attaquer(Personnage &cible)
{
	cible.setVie(cible.getVie()-getDegatsArme());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	setVie(getVie()+quantitePotion);
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	setNomArme(nomNouvelleArme);
    setDegatsArme(degatsNouvelleArme);
}

string Personnage::estVivant()
{
    if(getVie() > 0) {
    	return getNomPersonnage() + " est encore en vie";
    }
    return getNomPersonnage() + " est mort";
}
const std::string& Personnage::getNomPersonnage() const {
	return nomPersonnage;
}

void Personnage::setNomPersonnage(const std::string& nomPersonnage) {
	this->nomPersonnage = nomPersonnage;
}
int Personnage::getDegatsArme() const {
	return m_degatsArme;
}

void Personnage::setDegatsArme(int degatsArme) {
	m_degatsArme = degatsArme;
}

int Personnage::getMana() const {
	return m_mana;
}

void Personnage::setMana(int mana) {
	m_mana = mana;
}

const std::string& Personnage::getNomArme() const {
	return m_nomArme;
}

void Personnage::setNomArme(const std::string& nomArme) {
	m_nomArme = nomArme;
}

int Personnage::getVie() const {
	return m_vie;
}

void Personnage::setVie(int vie) {
	m_vie = vie;
}
