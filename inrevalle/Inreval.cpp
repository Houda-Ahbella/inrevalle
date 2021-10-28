// inrevalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <iostream>
#include "Interval.h"

int main()
{
    Interval interva1(1.5,0);
    interva1.consulter();
    std::cout << "le maximum est " << interva1.valeur_max() << "\n";
    std::cout << "le minimum est " << interva1.valeur_min() << "\n";
    if (interva1[2] == true) std::cout << "la valeur appartirnt \n\n";
    else std::cout << "la valeur n'appartient \n\n ";
    std::cout << " \n\n ";
    Interval interva2(-1, 0);
    interva2.consulter();
    std::cout << "le maximum est " << interva2.valeur_max() << "\n";
    std::cout << "le minimum est " << interva2.valeur_min() << "\n";
    if (interva2[2] == true) std::cout << "la valeur appartirnt \n\n";
    else std::cout << "la valeur n'appartient \n\n ";
    std::cout << " l'union\n ";
    (interva1 + interva2)->consulter();
    std::cout << " l'intersection\n ";
    (interva1 - interva2)->consulter();


    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
