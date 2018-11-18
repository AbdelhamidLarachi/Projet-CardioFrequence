#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

typedef struct mesDonnees   /*STRUCTURE AVEC POUL ET TEMPS*/
{
  int battement; /*LE BATEMENT*/
  int temps;    /*LE TEMPS*/
}mesDonnees;    /*DECLARATION D'UNE STRUCTURE MESDONNEES*/


int main()  // fonction main
{
    char tab[168];
    unsigned int i = 0;
    int poul;
    int temps;
    mesDonnees tableauDeDonnees[620];
    FILE *monFichier = NULL;    /*ON OUVRE BATTEMENTS.TXT*/
    monFichier = fopen("Battements.csv","r");

        if (monFichier != NULL) /*SI OUVERTURE OK*/
        {
            /*printf("OUVERTURE OK\n");*/
        }
        else
        {
            printf("ERREUR OUVERTURE\n"); /*SI OUVERTURE PAS OK*/
            exit(EXIT_FAILURE);
            fclose(monFichier);
        }



    while (fgets(tab, 17, monFichier) != NULL)
    {
            sscanf(tab,"%d;%d",&poul,&temps);   /*ON RECUPERE LES DONNEES*/

       tableauDeDonnees[i].battement = poul;    /*ON REMPLIT LE TABLEAU*/
       tableauDeDonnees[i].temps = temps;
    i++;
    }

    int somme = 0,moyenne;
        for(i = 0; i<168;i++) /*ON ADDITIONNE TOUT*/
        {
            somme += tableauDeDonnees[i].battement;
        }
   moyenne = somme/168;

float x= 60000/moyenne;
 moyenne = (int) x;

    generationcode(moyenne);  // appel de la fonction generation code
   return 0;
}
