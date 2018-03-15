/*
 * main.cpp
 *
 *  Created on: 15 mars 2018
 *      Author: Antoi
 */

#include <iostream>
#include <string>
#include <fstream>
#include "Etudiant.h"

using namespace std;

int main()
{
	Etudiant etudiant1;
	etudiant1.saisie();
	etudiant1.moyenne();
	etudiant1.admis();
	etudiant1.afficher();
        return 0;
}
