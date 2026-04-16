int motorpin = 9;
int motor1pin = 6;
int motor2pin = 5;
int motor3pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin, OUTPUT);
  pinMode(motor1pin, OUTPUT);
  pinMode(motor2pin, OUTPUT);
  pinMode(motor3pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (motorpin, 128);
  analogWrite (motor1pin, 128);
  analogWrite (motor2pin, 128);
  analogWrite (motor3pin, 128);
  delay(2000);
  analogWrite (motorpin, 0);
  analogWrite (motor1pin, 0);
  analogWrite (motor2pin, 0);
  analogWrite (motor3pin, 0);
  delay(2000);
}