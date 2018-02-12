/*
 * main.cpp
 *
 *  Created on: 12 f�vr. 2018
 *      Author: Antoi
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Cr�ation de 2 objets de type Personnage : david et goliath
    Personnage david, goliath;

    david.setDegatsArme(20);
    david.setNomArme("Hache");
    david.setMana(40);
    david.setVie(200);

    goliath.setDegatsArme(10);
    goliath.setMana(30);
    goliath.setNomArme("Couteau");
    goliath.setVie(50);


    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david r�cup�re 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath r�attaque david
    david.attaquer(goliath);    //david contre-attaque

    goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
    goliath.attaquer(david);


    return 0;
};


