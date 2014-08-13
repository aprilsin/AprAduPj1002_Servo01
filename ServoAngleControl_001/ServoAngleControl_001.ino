/**********************************************************
 * Title: Servo Angle Control 001
 * Date: 2014-08-12
 * By: April
 
 Description:
 Using delays to control the width of duty cycles digitally
 ***********************************************************/
#define  servoPin  11

void setup() {
  Serial.begin(9600);

  pinMode(servoPin, OUTPUT);

  servoAngle(0);          // Center the servo and wait...
  servoAngle(0);          // Center the servo and wait...
  servoAngle(0);          // Center the servo and wait...
      
  delay(3000);
}

void loop() {
  int n;

  for (n = -180; n <= 180; n++) {
    servoAngle(n);
    delay(2);
  }
  
  for (n=180; n>=-180; n--) {
    servoAngle(n);
    delay(2);
  }
}

void servoAngle(int angle) {
  int pulseWidth;

  pulseWidth = map(angle, -180, 180, 1000, 2000);

  Serial.println(angle);
  Serial.println(pulseWidth);
  Serial.println(" ");

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(pulseWidth);

  digitalWrite(servoPin, LOW);
  delayMicroseconds(10000 - pulseWidth);          // 100Hz
}


