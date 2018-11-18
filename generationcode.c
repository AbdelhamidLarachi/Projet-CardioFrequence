#include <stdlib.h>
#include <stdio.h>
#include <windows.h>   // les 2 déclarations ci dessus permettent de rentrer la fonction Sleep pour émettre un delay la fonction fait pause pour tant de seconde
#include <time.h>       //
#include "menu.h"
void generationcode(int moyenne) // fonction generationcode son nom indique ce qu il va faire
{
    short continuer;  // déclaration de continuer variable avec do et while permettant de ralancer le menu si l'utilisateur veut
  do{                //  boucle
    switch(menu())    // structure de controle
      {
    /*    int choix2; */
        FILE* fichier1= NULL;
        FILE* fichier2= NULL;
        FILE* fichier3= NULL;       //  sont des pointeurs de la structure FILE , car on ne modifie jamais le fichier directement on utilise un pointeur qui nous donne une adresse
        FILE* fichier40= NULL;
        FILE* fichier41= NULL;
        FILE* fichier42= NULL;
        FILE* fichier43= NULL;
        FILE* fichier44= NULL;
        FILE* fichier45= NULL;
        FILE* fichier46= NULL;
        FILE* fichier47= NULL;
        FILE* fichier48= NULL;
        FILE* fichier49= NULL;
        FILE* fichier5= NULL;
        FILE* fichier6= NULL;


            case 1: // differentes case qui sont relié au different choix du menu
            printf(" Votre choix est 1 - Une chenille de LED au rythme de votre coeur\n\n");
            fichier1=fopen("param.h//param.h.ino","w+");fichier1;  // assigne le fichier  au fichier param.h.ino

            if (fichier1 != NULL)   // cette structure de controle permet qui si le fichier  est different de NULL donc si le fichier a reussi a ouvrir le fopen d'en haut
                {
                    printf("ouverture du fichier \n");   // si structure verifié alors affiche ouverture du fichier
                    Sleep(2000);   // delay de 2 sec
                    fprintf(fichier1,"const int fDelay =  %d ;\n void setup()\n {\n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n for(short i=2; i<12; i++)\n {\n digitalWrite(i-1, LOW);\n digitalWrite(i, HIGH);\n delay(fDelay);\n if(i == 11)\n {\n digitalWrite(i, LOW);\n }\n }\n }",moyenne);
                    fclose(fichier1);    // la fonction d'en haut permet d'écrire le code dans le fichier et cette ligne permet de fermer le fichier
                    system("start param.h//param.h.ino");  // cette commande permet d'ouvrir réelement le fichier qui jusque la était pas afficher donc pas vu par l'utilisateur
                    Sleep(6000); // attente de 6 sec le temp que le param.h.ino s'ouvre
                    keybd_event(VK_CONTROL,0,0,0);  // les 3 ligne ci dessous permettent de faire controle U qui va téléversser automatiquement dans l'arduino
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);

                }

            else   // sinon que fichier n'est pas different de NULL soit que le fichier n'a pas été ouvert
                {
                    printf("Impossible d'ouvrir le fichier, test d'en créer un \n"); // afficher cela
                    fichier1=fopen("param.h.ino","w+");fichier1;    // cette commande permet de créer le fichier  donc cette fois ci le fichier va obliigatoirement être different de NULL
                    if (fichier1 !=NULL)   // même fonction que le if du départ
                    {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier1,"const int fDelay = %d;\n void setup()\n {\n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n for(short i=2; i<12; i++)\n {\n digitalWrite(i-1, LOW);\n digitalWrite(i, HIGH);\n delay(fDelay);\n if(i == 11)\n {\n digitalWrite(i, LOW);\n }\n }\n }",moyenne);
                    fclose(fichier1);
                    system("param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    }
                }
                  break;

            case 2: // ceci est répété pour toute les différentes case
                printf("Votre choix est 2 - Une LED sur deux au rythme de votre coeur\n");
                fichier2=fopen("param.h//param.h.ino","w+");fichier2;
            if (fichier2 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier2,"const int fDelay =%d;\n void setup()\n { \n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n short ledUpTime = 50;\n for(short i=2; i<12; i+=2)\n {\n if (i>=12) {i-=10;}\n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n }\n }",moyenne );
                    fclose(fichier2);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);

                }

            else
                {
                    printf("Impossible d'ouvrir le fichier , test d'en creer un \n");
                    fichier2=fopen("param.h.ino","w+");fichier2;


                    if (fichier2 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier2,"const int fDelay = %d;\n void setup()\n { \n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n short ledUpTime = 50;\n for(short i=2; i<12; i+=2)\n {\n if (i>=12) {i-=10;}\n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n }\n }",moyenne );
                    fclose(fichier2);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);

                }
                }
                    break;

            case 3:/*CAS_3*/
                printf("Votre choix est 3 - Une LED sur trois au rythme de votre coeur\n");
                fichier3=fopen("param.h//param.h.ino","w+");fichier3;

                    if (fichier3 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier3,"const int fDelay = %d;\n void setup()\n{\nfor(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n  }\n void loop()\n {\n short ledUpTime = 50;\n for(short i=2; i<15; i+=3)\n {\n  if (i>=12) {i-=10;\n } \n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n } \n}",moyenne);
                    fclose(fichier3);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                  /*Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);             // permettait de faire controle A soit de supprimer le programme a la fin pour ne pas avoir de bug pour continuer sur un autre
                    keybd_event('A',0,0,0);                    // remplacé par w+ en debut de fonction lors de fopen permettant de lire écrire et supprimer toute trace d'avant
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, Test d'en creer un \n");
                    fichier3=fopen("param.h.ino","w+");fichier3;

                    if (fichier3 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier3,"const int fDelay = %d;\n void setup()\n{\nfor(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n  }\n void loop()\n {\n short ledUpTime = 50;\n for(short i=2; i<15; i+=3)\n {\n  if (i>=12) {i-=10;\n } \n digitalWrite(i, HIGH);\n delay(ledUpTime);\n digitalWrite(i, LOW);\n delay(fDelay);\n } \n}",moyenne);
                    fclose(fichier3);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

            /*case 4:
                printf("Votre choix est 4 - Une seule LED au choix au rythme de votre coeur\n");

                    printf("Veuillez choisir la Led entre 1 est 10 que vous voulez faire clignoter\n");
                    scanf("%d",&choix2);

                    switch(choix2)
                    {   */
                       case 10: /*CAS_1_BIS*/
                            printf("Votre choix de Led est la numero 1\n");
                            fichier40=fopen("param.h//param.h.ino","w+");fichier40;



            if (fichier40 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier40,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 2;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier40);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
               /*   Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0); */
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier40=fopen("param.h.ino","w+");fichier40;
                    if (fichier40 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier40,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 2;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier40);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                      case 11:
                            printf("Votre choix de Led est la numero 2\n");
                            fichier41=fopen("param.h//param.h.ino","w+");fichier41;



            if (fichier41 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier41,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 3;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier41);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                  /*Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier \n");
                    fichier41=fopen("param.h.ino","w+");fichier41;
                    if (fichier41 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier41,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 3;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier41);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 12:
                            printf("Votre choix de Led est la numero 3\n");
                            fichier42=fopen("param.h//param.h.ino","w+");fichier42;



            if (fichier42 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier42,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 4;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier42);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                   /*Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier42=fopen("param.h.ino","w+");fichier42;
                    if (fichier42 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier42,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 4;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier42);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 13:
                            printf("Votre choix de Led est la numero 4\n");
                            fichier43=fopen("param.h//param.h.ino","w+");fichier43;



            if (fichier43 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier43,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 5;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier43);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                  /*Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier , test d'en creer un \n");
                    fichier43=fopen("param.h.ino","w+");fichier43;
                     if (fichier43 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier43,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 5;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier43);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 14:
                            printf("Votre choix de Led est la numero 5\n");
                            fichier44=fopen("param.h//param.h.ino","w+");fichier44;



            if (fichier44 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier44,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 6;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier44);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                /*  Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en cree un \n");
                    fichier44=fopen("param.h.ino","w+");fichier44;
                    if (fichier44 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier44,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 6;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier44);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 15:
                            printf("Votre choix de Led est la numero 6\n");
                            fichier45=fopen("param.h//param.h.ino","w+");fichier45;



            if (fichier45 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier45,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 7;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier45);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                 /* Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier45=fopen("param.h.ino","w+");fichier45;
                    if (fichier45 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier45,"\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 7;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier45);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 16:
                            printf("Votre choix de Led est la numero 7\n");
                            fichier46=fopen("param.h//param.h.ino","w+");fichier46;



            if (fichier46 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier46,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 8;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier46);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                /*  Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);;*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier46=fopen("param.h.ino","w+");fichier46;
                    if (fichier46 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier46,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 8;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier46);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 17:
                            printf("Votre choix de Led est la numero 8\n");
                            fichier47=fopen("param.h//param.h.ino","w+");fichier47;



            if (fichier47 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier47,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 9;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier47);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                  /*Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier47=fopen("param.h.ino","w+");fichier47;
                    if (fichier47 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier47,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 9;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier47);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 18:
                            printf("Votre choix de Led est la numero 9\n");
                            fichier48=fopen("param.h//param.h.ino","w+");fichier48;



            if (fichier48 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier48,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 10;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier48);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                 /* Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier48=fopen("param.h.ino","w+");fichier48;
                    if (fichier48 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier48,"\n const int fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 10;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier48);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       case 19:
                            printf("Votre choix de Led est la numero 10\n");
                            fichier49=fopen("param.h//param.h.ino","w+");fichier49;



            if (fichier49 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf("\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 11;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier49);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                /*  Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en creer un \n");
                    fichier49=fopen("param.h.ino","w+");fichier49;
                     if (fichier49 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf("\n const short fDelay = %d;\n const short ledUpTime = 50;\n const short chosenLED = 11;\n void setup() \n {\n pinMode(chosenLED, OUTPUT);\n }\n void loop() \n {\n  digitalWrite(chosenLED, HIGH);\n delay(ledUpTime);\n digitalWrite(chosenLED, LOW);\n delay(fDelay);\n }",moyenne);
                    fclose(fichier49);
                    system("start param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                    break;

                       default:
                           printf("ERREUR");
                        break;

            case 5:
                    printf("Votre choix est 5 - Toutes les LED au rythme de votre coeur\n");
                    fichier5=fopen("param.h//param.h.ino","w+");fichier5;



            if (fichier5 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier5,"const int fDelay = %d;  \n \n \n void setup() \n { \n for(short i=2; i<12; i++) \n {\npinMode(i, OUTPUT);\n} \n } \n \n \n void loop()\n{\n short ledUpTime = 50;\n for(short i=2; i<12; i++)\n {\n digitalWrite(i, HIGH);}\n delay(ledUpTime);\n for(short i=2; i<12; i++) {digitalWrite(i, LOW);}\n delay(fDelay-ledUpTime);\n}",moyenne);
                    fclose(fichier5);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                /*  Sleep(8000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('A',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    keybd_event(VK_DELETE,0,0,0);*/
                }

            else
                {
                    printf("Impossible d'ouvrir le fichier , test d'en creer un \n");
                    fichier5=fopen("param.h.ino","w+");fichier5;
                    if (fichier5 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier5,"const int fDelay = %d ; \n \n \n void setup() \n { \n for(short i=2; i<12; i++) \n {\npinMode(i, OUTPUT);\n} \n } \n \n \n void loop()\n{\n short ledUpTime = 50;\n for(short i=2; i<12; i++)\n {\n digitalWrite(i, HIGH);}\n delay(ledUpTime);\n for(short i=2; i<12; i++) {digitalWrite(i, LOW);}\n delay(fDelay-ledUpTime);\n}",moyenne);
                    fclose(fichier5);
                    system("param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                }
                }
                break;
                 case 6:
            printf(" Votre choix est 6 - Gradient de LED en forme de coeur \n\n");
            fichier6=fopen("param.h//param.h.ino","w+");fichier6;



            if (fichier6 != NULL)
                {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier6,"const int fDelay = %d;\n void setup()\n {\n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n    short ledUpTime = 200;\n   digitalWrite(7, HIGH);\n delay(ledUpTime);\n    digitalWrite(6, HIGH);\n   digitalWrite(8, HIGH);\n   delay(ledUpTime);\n    digitalWrite(5, HIGH);\n   digitalWrite(9, HIGH);\n   delay(ledUpTime);\n   digitalWrite(10, HIGH);\n digitalWrite(4, HIGH);\n delay(ledUpTime);\n digitalWrite(11, HIGH);\n digitalWrite(3, HIGH);\n delay(ledUpTime);\ndigitalWrite(2, HIGH);\n delay(ledUpTime);\ndigitalWrite(2, LOW);\n  delay(ledUpTime);\ndigitalWrite(11, LOW);\n  digitalWrite(3, LOW);\n  delay(ledUpTime);\n digitalWrite(10, LOW);\n  digitalWrite(4, LOW);\n delay(ledUpTime);\n  digitalWrite(5, LOW);\n digitalWrite(9, LOW);\n  delay(ledUpTime);\n digitalWrite(6, LOW);\n   digitalWrite(8, LOW);\n  delay(ledUpTime);\n digitalWrite(7, LOW);\n  delay(ledUpTime);\n  }",moyenne);
                    fclose(fichier6);
                    system("start param.h//param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);

                }

            else
                {
                    printf("Impossible d'ouvrir le fichier, test d'en créer un \n");
                    fichier6=fopen("param.h.ino","w+");fichier6;
                    if (fichier6 !=NULL)
                    {
                    printf("ouverture du fichier \n");
                    Sleep(2000);
                    fprintf(fichier6,"const int fDelay = %d;\n void setup()\n {\n for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}\n }\n void loop()\n {\n    short ledUpTime = 200;\n   digitalWrite(7, HIGH);\n delay(ledUpTime);\n    digitalWrite(6, HIGH);\n   digitalWrite(8, HIGH);\n   delay(ledUpTime);\n    digitalWrite(5, HIGH);\n   digitalWrite(9, HIGH);\n   delay(ledUpTime);\n   digitalWrite(10, HIGH);\n digitalWrite(4, HIGH);\n delay(ledUpTime);\n digitalWrite(11, HIGH);\n digitalWrite(3, HIGH);\n delay(ledUpTime);\ndigitalWrite(2, HIGH);\n delay(ledUpTime);\ndigitalWrite(2, LOW);\n  delay(ledUpTime);\ndigitalWrite(11, LOW);\n  digitalWrite(3, LOW);\n  delay(ledUpTime);\n digitalWrite(10, LOW);\n  digitalWrite(4, LOW);\n delay(ledUpTime);\n  digitalWrite(5, LOW);\n digitalWrite(9, LOW);\n  delay(ledUpTime);\n digitalWrite(6, LOW);\n   digitalWrite(8, LOW);\n  delay(ledUpTime);\n digitalWrite(7, LOW);\n  delay(ledUpTime);\n  }",moyenne);
                    fclose(fichier6);
                    system("param.h.ino");
                    Sleep(6000);
                    keybd_event(VK_CONTROL,0,0,0);
                    keybd_event('U',0,0,0);
                    keybd_event(VK_CONTROL,0,KEYEVENTF_KEYUP,0);
                    }
                }
                  break;



     }

      printf("tapez 1 si vous voulez continuer sinon tapez 0\n");
      scanf("%d",&continuer);
   }while(continuer==1);
}

