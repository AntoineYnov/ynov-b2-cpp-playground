/*
 * main.cpp
 *
 *  Created on: 12 f�vr. 2018
 *      Author: Antoi
 */
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fichier("garage.txt", ios::in);  // on ouvre le fichier en lecture

    if(fichier)  // si l'ouverture a r�ussi
    {
        // instructions
    	cout << "Fichier ouvert" << endl;
            fichier.close();  // on ferme le fichier
    }
    else  // sinon
            cerr << "Impossible d'ouvrir le fichier !" << endl;

    return 0;
}
