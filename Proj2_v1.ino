#include <Servo.h>

Servo cntServo1;
int spin1 = 2;

int lightValue1;
int sensorPin1 = A0;
void setup() {

  cntServo1.attach(spin1);
  Serial.begin(9600);

}

void loop()
 {
lightValue1 = analogRead(sensorPin1);

if(lightValue1<400){
  cntServo1.write(180);
}
  else {

    cntServo1.write(85);
  }
 // cntServo1.write(85);
}
