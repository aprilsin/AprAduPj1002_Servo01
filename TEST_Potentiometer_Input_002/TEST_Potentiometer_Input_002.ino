/*****************************************************************
 * Title: Potentiometer Input Test 002
 * Date: 2014-08-13
 * By: Apri
 * 
 * Description:
 * Using the potentiometer to control the luminous of an LED
 ****************************************************************/
#define  ledPin     9
#define  potPin     A0

#define  LED_ON   LOW
#define  LED_OFF  HIGH

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  x = map(potVal, 0, 1023, 0, 255);
  analogWrite(ledPin, x);
}
  

