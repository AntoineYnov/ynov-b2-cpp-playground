#include <iostream>
using namespace std;

int main()
{

    cout << "Quel est votre nom ?" << endl;
    string nomUtilisateur("Sans nom"); //On cr�e une case m�moire pour contenir une chaine de caract�res
    getline(cin, nomUtilisateur); //On remplit cette case avec toutela ligne que l'utilisateur a �crit

    cout << "Quel age avez-vous ?" << endl;

    int ageUtilisateur(0); //On prepare une case m�moire pour stocker un entier

    cin >> ageUtilisateur; //On fait entrer un nombre dans cette case

    cout << nomUtilisateur << " Vous avez " << ageUtilisateur << " ans !" <<  endl; //Et on l'affiche

    return 0;
}
