const int in1 = 7;
const int in2 = 6;
const int ena = 9;
void setup() 
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  analogWrite (ena,100);
  digitalWrite (in1,LOW);//ทวนเข้ม
  digitalWrite (in2,HIGH);
  Serial.begin(9600);
  Serial.println("Turn CW");
  delay(3000);
  analogWrite (ena,0);
  digitalWrite (in1,LOW);
  digitalWrite (in2,HIGH);
}
void loop() 
{
    
}