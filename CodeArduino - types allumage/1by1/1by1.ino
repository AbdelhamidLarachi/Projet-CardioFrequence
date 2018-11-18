const short fDelay = 666; //==>90 BPM, écart entre deux battement de coeurs

void setup()
{
    for(short i=2; i<12; i++) {pinMode(i, OUTPUT);} //initialisation des pins 2 a 11
}

void loop()
{
  for(short i=2; i<12; i++) // boucle permettant d'allumer toutes les LED une par une
  {
    digitalWrite(i-1, LOW);
    digitalWrite(i, HIGH);
    delay(fDelay);
    if(i == 11) //gère l'exception de la dernière LED pour l'éteindre
    {
      digitalWrite(i, LOW);
    }
  }
}
