#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

short menu()   //fonction menu qui va retourne un short entre 1 a 6 et 10 a 19
{
    short choix;    // menu qui sera affiché au lancement de la console
    printf("Bienvenue, choissisez un des modes d'affichage pour votre fréquence cardiaque\n"); // differents choix
    printf("-----------------------------------------------------------------------------\n");
    printf("1 - Une chenille de LED au rythme de votre coeur\n");
    printf("2 - Une LED sur deux au rythme de votre coeur\n");
    printf("3 - Une LED sur trois au rythme de votre coeur\n");
    printf("10 - 19 Une seule LED au choix au rythme de votre coeur entrez de 10 a 19 pour allumer la Led de 1 a 10\n");
    printf("5 - Toutes les LED au rythme de votre coeur\n");
    printf("6 - Gradient de LED en forme de coeur \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Votre choix : "); // demande a 'lutilisateur le choix qu il veut
    scanf("%d", &choix);    // permet a l'utilisateur de rentrer ce choix

    return choix;   // return le short
}
