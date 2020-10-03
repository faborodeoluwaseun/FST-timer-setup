int switchState = 0;
int redLEDPin = 12;
int greenLEDPin = 8;
int switchPin = 2;


void setup() {
    
  pinMode (greenLEDPin, OUTPUT);
  pinMode (redLEDPin, OUTPUT);
  pinMode (switchPin, INPUT);
  
 }
  
void loop() {
  
  switchState = digitalRead(switchPin);
  
  if(switchState == HIGH) {
  
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);  
    delay (3000);
    digitalWrite(greenLEDPin, HIGH); 
    
    tone (4, 1000, 250);
    delay (3000);  
    
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, HIGH);
    
    tone (4, 1000, 250);
    delay(250);
    tone (4, 1000, 250);
    delay(800);
    tone (4, 1000, 250);
    delay(250);
    tone (4, 1000, 250);
    delay(800);
    tone (4, 1000, 250);
    delay(250);
    tone (4, 1000, 250);
    delay(800);
           
  }
  
  else{
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, HIGH);
  }
   
  }




