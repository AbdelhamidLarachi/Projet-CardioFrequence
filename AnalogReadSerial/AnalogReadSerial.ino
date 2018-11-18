/**************************************************
 * Capteur infrarouge pour pulsations cardiaques.
 * On enregistre les données brutes pendant 5 secondes
 * electroniqueamateur.blogspot.com
 **************************************************/

unsigned long time;


void setup() {

  Serial.begin(9600);

  Serial.println("Veuillez patienter");

  time = millis();

  // un petit réchauffement du convertisseur
  // analogique-numérique semble améliorer les résultats
  while((millis()-time)<100){
    analogRead(A5);
  }

  time = millis();
  // on affiche au moniteur série pendant 5 secondes
  while((millis()-time)< 3000){
    Serial.println(analogRead(A5));}

  

}


void loop() {


}
