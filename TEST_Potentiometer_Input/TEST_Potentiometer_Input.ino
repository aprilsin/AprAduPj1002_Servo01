/*****************************************************************
 * Title: Potentiometer Input Test 001
 * Date: 2014-08-13
 * By: Apri
 * 
 * Description:
 * Using the potentiometer to control the luminous of an LED
 ****************************************************************/
#define  ledPin     9
#define  potPin     A1

#define  LED_ON   HIGH

#define  LED_OFF  LOW

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, LED_ON);
  delay(analogRead(potPin));
  Serial.println(analogRead(potPin));
  
  digitalWrite(ledPin, LED_OFF);
  delay(analogRead(potPin));
  Serial.println(analogRead(potPin));

  Serial.println("   ");
}
  

