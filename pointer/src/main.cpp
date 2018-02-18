/*
 * main.cpp
 *
 *  Created on: 18 févr. 2018
 *      Author: Antoi
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char *chaineChar;
int fish = 5;
int *fishPointer;

void passByReference(int *x);
void passByValue(int x);

int main()
{
	int antoine = 20;
	int david = 20;

	fishPointer = &fish;
	cout << fishPointer << endl;

	passByValue(antoine);
	passByReference(&david);

	cout << "Par la valeur, antoine vaut " << antoine << endl;
	cout << "Par la reference, David vaut " << david << endl;

//	chaineChar = "UnPointer";
//	getLastAdresse(*chaineChar);
        return 0;
}
char * getLastAdresse(char *chaineChar){
	while (chaineChar[0]){
		chaineChar++;
	}
	return chaineChar;
}
void passByValue(int x) {
	x = 99;
}
void passByReference(int *x){
	*x=66;
}
