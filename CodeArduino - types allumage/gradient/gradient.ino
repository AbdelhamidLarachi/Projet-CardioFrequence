const short fDelay = 1500; //==>90 BPM   écart entre 2 battement 
 
void setup()   //fonction setup celle ci est une structure ou il faut initialise ce que l'on veut utiliser
{
    for(short i=2; i<12; i++) {pinMode(i, OUTPUT);}  //initialisation des pins 2 a 11
}
 
void loop()   // boucle infini 
{
    short ledUpTime = 200;  
    digitalWrite(7, HIGH);      // toute cette boucle permet d'allumer les LED en gradient donc elle va alummer toute les LED avec un certain delay entre puis va les éteindre dans le sens contraire avec le même delay entre 
    delay(ledUpTime);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    delay(ledUpTime);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(ledUpTime);
    digitalWrite(10, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    delay(ledUpTime);
    digitalWrite(11, HIGH);
    digitalWrite(3, HIGH);
    delay(fDelay);
    digitalWrite(11, LOW);
    digitalWrite(3, LOW);
    delay(ledUpTime);
    digitalWrite(10, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    delay(ledUpTime);
    digitalWrite(5, LOW);
    digitalWrite(9, LOW);
    delay(ledUpTime);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    delay(ledUpTime);
    digitalWrite(7, LOW);
    delay(ledUpTime);
    delay(fDelay);
}
