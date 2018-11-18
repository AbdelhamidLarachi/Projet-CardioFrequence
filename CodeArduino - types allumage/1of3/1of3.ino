const short fDelay = 666;//==>90 BPM   BPM, écart entre deux battement de coeurs

void setup()    // fonction setup celle ci est une structure ou il faut initialise ce que l'on veut utiliser
{
    for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}   //initialisation des pins 2 a 11
}
}

void loop()  // boucle infini 
{
    short ledUpTime = 50;
    for(short i=2; i<15; i+=3)  // boucle permettant d'allumer toutes les LED une par trois
    {
        if (i>=12) {i-=10;}
        digitalWrite(i, HIGH);
        delay(ledUpTime);
        digitalWrite(i, LOW);
        delay(fDelay);
    }
}
