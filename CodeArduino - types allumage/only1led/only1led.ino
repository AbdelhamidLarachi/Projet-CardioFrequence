const short fDelay = 666;//==>90 BPM   écart entre deux battement de coeurs
const short ledUpTime = 50;
const short chosenLED = 2;       // choix de la Led a mettre entre 2 et 11 en fonction de ce que l'on veut 
void setup()  / fonction setup celle ci est une structure ou il faut initialise ce que l'on veut utiliser
{pinMode(chosenLED, OUTPUT);}  // initailisation de la LED en question 
void loop()    // boucle infini 
{digitalWrite(chosenLED, HIGH);  // allume la LED
delay(ledUpTime);
digitalWrite(chosenLED, LOW);    // éteindre la LED
delay(fDelay);
}
