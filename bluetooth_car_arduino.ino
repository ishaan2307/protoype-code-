int motor1=6;
int motor2=7;
int motor3=8;
int motor4=9;
void setup()
{
pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(motor3,OUTPUT);
pinMode(motor4,OUTPUT);
}
void forward()
 {
 digitalWrite(motor1,HIGH);
 digitalWrite(motor2,LOW);
 digitalWrite(motor3,HIGH);
 digitalWrite(motor4,LOW);
 }
void backward()
 {
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,HIGH);
 digitalWrite(motor3,LOW);
 digitalWrite(motor4,HIGH);
 }
void left()
 {
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,HIGH);
 digitalWrite(motor3,HIGH);
 digitalWrite(motor4,LOW);
 }
void right()
 {
 digitalWrite(motor1,HIGH);
 digitalWrite(motor2,LOW);
 digitalWrite(motor3,LOW);
 digitalWrite(motor4,HIGH);
 }
void stop()
 {
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,LOW);
 digitalWrite(motor3,LOW);
 digitalWrite(motor4,LOW);
}
void loop()
{
  forward();
  delay(2000);
  backward();
  delay(5000);
  left();
  delay(3000);
  right();
  delay(4000);
  stop();
  delay(7000);
