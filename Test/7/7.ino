void setup()
{
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    

}
void loop()
{
    const int in1 = 7;
    const int in2 = 6;
    const int ena = 9;
    int speed = 20;
 
 while(digitalRead(2)==0)
  {
  speed = 20*2;
  analogWrite (ena,speed);
  digitalWrite (in1,HIGH);//ตามเข็ม
  digitalWrite (in2,LOW);
  }
}
