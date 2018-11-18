//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;
void setup() {
 udSerial = new Serial(this, Serial.list()[0], 9600);
 output = createWriter ("C:/Users/Nicolas Drapier/Documents/GitHub/ExiaCardioFM/M4/GestionDonnées/Battements.csv");
  output = createWriter ("C:/Users/Nicolas Drapier/Documents/GitHub/ExiaCardioFM/M2/Battements.csv");
}
 void draw() {
 if (udSerial.available() > 0) {
 String SenVal = udSerial.readStringUntil('\n');
 if (SenVal != null) {
 output.println(SenVal);
 }
 }
 }
 void keyPressed(){
 output.flush();
 output.close();
 exit();
 }