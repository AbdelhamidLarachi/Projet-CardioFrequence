const short fDelay = 666; //==>90 BPM   écart entre deux battement de coeurs

void setup()   // fonction setup celle ci est une structure ou il faut initialise ce que l'on veut utiliser
{
    for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}   //initialisation des pins 2 a 11
}

void loop()  // boucle infini 
{
    short ledUpTime = 50;
    for(short i=2; i<12; i++) {digitalWrite(i, HIGH);}   // boucle permettant d'allumer toutes les LED en même temp
    delay(ledUpTime);
    for(short i=2; i<12; i++) {digitalWrite(i, LOW);}  // boucle permettant d'éteindre toutes les LED en même temp
    delay(fDelay-ledUpTime);
}
