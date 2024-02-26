#include "fonction-bienvenue.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string message = "Bienvenue le monde !"; // Message par défaut
    int nbAffichage = 1; // Nombre par défaut de fois que le message doit être affiché

    // Si des arguments de la ligne de commande sont fournis
    if (argc > 1) {
        // Le premier argument est le message de bienvenue à afficher
        message = argv[1];
        
        // Si un deuxième argument est fourni, c'est le nombre de fois que le message doit être affiché
        if (argc > 2) {
            nbAffichage = std::stoi(argv[2]); // Convertit l'argument en entier
        }
    }

    // Affiche le message de bienvenue
    for (int i = 0; i < nbAffichage; ++i) {
        afficherBienvenue(message);
    }

    return 0;
}

