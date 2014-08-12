/**************************************************
 * Title: PWM Output Test
 * Date: 2014-08-12
 * By: April & Michael
 * 
 * Description:
 * Using PWM to control the luminous of an LED
 ***************************************************/

#define  ledPin     9
#define  servoPin   11

#define  LED_ON   LOW
#define  LED_OFF  HIGH

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
}

void loop() {
  loop1();
}

void loop0() {
  int i;

  for(i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(100);
  }

  for(i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(100);
  }
}

void loop1() {
  int t;

  for (t=750; t <= 2000; t++) {
    digitalWrite(ledPin, LED_OFF);
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(t);
    digitalWrite(ledPin, LED_ON);
    digitalWrite(servoPin, LOW);
    delay(10);
  }
}

void servoAngle(int angle)
{
  //  -180   0  180
  //   750 1500 2000
}





