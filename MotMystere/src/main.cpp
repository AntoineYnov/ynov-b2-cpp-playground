/*
 * main.cpp
 *
 *  Created on: 13 févr. 2018
 *      Author: Antoi
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/** methode permettant de melanger les lettres du mots
 * @params mot
 * @return melange
 */
string randomLettres(string mot)
{
   string melange;
   int position(0);

   while (mot.size() != 0)
   {
      position = rand() % mot.size();
      melange = melange + mot[position];
        mot.erase(position, 1);
    }

   return melange;
}

int main()
{
   string motMystere, motMelange, motUtilisateur;

   cout << "Saisissez un mot" << endl;
   cin >> motMystere;

   motMelange = randomLettres(motMystere);

   while (motUtilisateur != motMystere) {
	   cout << endl << "Quel est ce mot ? " << motMelange << endl;
	   cin >> motUtilisateur;
	   if (motUtilisateur == motMystere)
		{
		    cout << "Bravo !" << endl;
		}
		else
		{
			cout << "Ce n'est pas le mot !" << endl;
		}
   }

    return 0;
}
