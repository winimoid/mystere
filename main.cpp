/**
* Goal : Deviner un mot melangé aléatoirement par la fonction random
* Author : Winigah M. Moise
* Last Update : 06/07/2022
*/
#include <iostream>
#include "myst.h"
#include <fstream>

using namespace std;

int main()
{
    string mot, continuer;
    char cont;

    cout << "\t\t\t+---------------------+" << endl;
    cout << "\t\t\t|     JEU MYSTERE     |" << endl;
    cout << "\t\t\t+---------------------+" << endl;

    cout << "\t\tLe jeu consiste à retrouver le mot mystère." << endl << endl;
    cout << "\t\tVous avez cinq (05) essais par mots." << endl << endl;

//    cout << "Saisissez un mot : ";
//    cin >> mot;
//    cin.ignore();
//    cout << endl;

    cout << "A la demande, apuyez sur la touche 'n' pour arreter " << endl << "Et sur toute autre touche pour continuer. Bonne chance !" << endl << endl;

    string path("Fichiers/dictionnaire.txt");
    string chemin("Fichiers/dico.txt");


    ifstream monFlux(path.c_str());
    if(monFlux)
    {
        do
        {
            getline(monFlux, mot);

            continuerPartie(mot);

            cout << endl << "Continuer ? : ";
            getline(cin, continuer);
            cout << endl;

            cont = continuer[0];
        }
        while(cont!='n');
    }
    else
    {
        cout << "ERREUR : Impossible d'ouvrir le fichier !" << endl;
    }



    return 0;
}
