/* BY NICOLAS DRAPIER
 *  EXIA CESI CAMPUS ORLEANS
 *  GROUPE NATHANEL AIGRET
 */
#include "cardio.h"

  short a = 66, b = 72;
void setup() {
  Serial.begin(9600);       //moniteur serie
  randomSeed(analogRead(5)); //on initialise a un port aleatoire

}

void loop() {

   /* while((millis()-time)< 3000){
    Serial.println(analogRead(A5));}*/

    
     while(millis() < 501)//sur 50ms
     {
      generationAl(a,b);  //on appelle generation aleatoire
      //calculPoul();
     }
      
}
