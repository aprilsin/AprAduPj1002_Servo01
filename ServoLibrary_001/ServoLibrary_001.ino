/*****************************************************************
 * Title: Servo Library 001
 * Date: 2014-08-13
 * By: Apri
 ****************************************************************/
#define  potPin     A1
#define  servoPin   11
#define  ledPin     2

#define  LED_ON    LOW
#define  LED_OFF   HIGH

ServoCenter() {
  servoAngle(0);          // Center the servo and wait...
  servoAngle(0);          // Center the servo and wait...
  servoAngle(0);          // Center the servo and wait...

  for (n=0; n<3; n++) {                // LED blinks for 3 times
    digitalWrite(ledPin, LED_ON);      // show that the servo is centering
    delay(700);
    
    digitalWrite(ledPin, LED_OFF);
    delay(300);
  }
}

void  potServo() {
  int potVal;
  int n;

  potVal = analogRead(potPin);

  n = map(potVal, 0, 1023, -180, 180);

  servoAngle(n);
}

void servoAngle(int angle) {
  int pulseWidth;

  pulseWidth = map(angle, -180, 180, 430, 2400);
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseWidth);

  digitalWrite(servoPin, LOW);
  delayMicroseconds(10000 - pulseWidth);
  
//  Serial.print("pulse Width = ");
//  Serial.println(pulseWidth);
//  Serial.println("  ");
}

