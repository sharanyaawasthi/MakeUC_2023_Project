int led = 8; //led would output light, so its either on or off. Thus, we use boolean values (0/1) - So, it would be connected to the digital ports
int button = 7;
int ldr = A0; // ldr would input light and measure its intensity to figure out the resistivity of the photoelectric material. Thus, it should output a value. So, it would be connected to analog ports.
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT); //the led has no input, it would just give the output which is light. SYNTAX = pinMode(variable, INPUT/OUTPUT);
pinMode(ldr, INPUT); //the ldr has input which is the light falling on it. SYNTAX = pinMode(variable, INPUT/OUTPUT);
pinMode(button, INPUT);
Serial.begin(9600); //Serial monitor is the output screen for arduino thus this syntax tells the program to set the 'Baud Rate' to a specific value depending on the data it will process. The value
// can be high for more complex data and low for less complex data. 9600 can be genrally used.
}

void loop() {
  // put your main code here, to run repeatedly:
int ldrread = analogRead(ldr); // we are defining 'ldrread' which is a new variable that stores the analog values captured by it. thus just like the topmost steps, 'int' should be used before defining it.
//analogRead means that it will 'read' the value from that particular analog port. In this case that port is 8.
//digitalWrite(8,HIGH); //SYNTAX = digitalWrite(Port Number, HIGH/LOW) Here, High = 1 and Low = 0 (1 = on and 0 = off) If 'HIGH' is put there, it will keep the light on. 
int buttonread = digitalRead(button);
Serial.println(ldrread); //'ln' will print the output in the next line. if we don't use it, it will output all the values in one single line without the spaces in between as well. 
delay(500); //this makes sure that there is a 0.5 sec gap between each value that is being outputted. Here, 1000 means 1 second. 

if (buttonread == 0){
  digitalWrite(8,HIGH);
}
if (buttonread == 1){
  digitalWrite(8,LOW);
}
Serial.println(buttonread);
}
