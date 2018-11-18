#include "cardio.h"
#include <Arduino.h>
void affichage(short nombre) //affichage sur le port s�rie
{
      //affichage
     Serial.print(nombre);
     Serial.print(";");
     Serial.print(millis());
     Serial.print("\n");
     delay(1);
}
void generationAl(short a,short b) //on genere des nombres al�atoires
{
  short nombre = random(a,b); //nombre aleatoire
  affichage(nombre);
}

/*void calculPoul(){
 * int seuil = 200
 *  if (analogRead(A0)>seuil)
 *  {
 *    time += millis();    
 *  }
 *    time -= millis();
 *    time *= 10^(-3);
 *    short poul = 60 / time;
 *    affichage(poul);
 * }
 */
