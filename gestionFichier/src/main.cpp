#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile("test.txt", ios::out);
    ofstream fichier("test.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert

        if(fichier)
        {
        	cout << "Que voullez-vous ecrire dans le fichier text" << endl;
            string contenuVoullu;
            cin >> contenuVoullu;
            fichier << contenuVoullu;
            string ligne;
            while(getline(inputFile, ligne))  // tant que l'on peut mettre la ligne dans "contenu"
            {
                    cout << ligne << endl;  // on l'affiche
            }
            fichier.close();
        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;

        return 0;
}
