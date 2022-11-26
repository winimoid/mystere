#include "myst.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

std::string melange(std::string mot)
{
    std::string mystere;
    int position;
    char lettre;

    srand(time(0));

    do
    {
        position = rand() % mot.size();
        lettre = mot[position];
        mystere += lettre;

        mot.erase(position, 1);
    }
    while(mot.size()!=0);

    return mystere;
}



void verification(std::string mot)
{
    std::string motMystere, motTrouve;
    int nbreEssais(4);

    motMystere = melange(mot);

    do
    {
        std::cout << "Quel est ce mot ? : " << motMystere << std::endl << std::endl;
        std::cin >> motTrouve;
        std::cin.ignore();
        std::cout << std::endl;

        if(motTrouve==mot)
        {
            std::cout << "BRAVO !!! Vous avez trouvé le mot." << std::endl;
        }
        else
        {
            if(nbreEssais==0)
            {
                std::cout << "Dommage ! Vous avez perdu. Le mot était : " << mot << std::endl << std::endl;
            }
            else
            {
                std::cout << "Ce n'est pas le mot !" << std::endl << std::endl << "Il vous reste " << nbreEssais << " Essais !" << std::endl << std::endl;

            }
        }

        nbreEssais--;
    }
    while(motTrouve!=mot && nbreEssais>=0);
}


void continuerPartie(std::string mot)
{
//    std::string continuer;
//    char cont;
//    do
//    {
        verification(mot);
//
//        std::cout << std::endl << "Continuer ? : ";
//        getline(std::cin, continuer);
//        std::cout << std::endl;
//
//        cont = continuer[0];
//    }
//    while(cont!='n');
}
