
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(10,OUTPUT);
pinMode(11,INPUT);

}

void loop() {

  long duration1,distance1,duration2,distance2,duration3,distance3;
  digitalWrite(6,HIGH);
  delay(10);
  digitalWrite(6,LOW);
  duration1 = pulseIn(7,HIGH);
  distance1=(duration1/2)/29.1;
  Serial.print(distance1);
  Serial.println("   ");
  delay(10);
  
  digitalWrite(8,HIGH);
  delay(10);
  digitalWrite(8,LOW);
  duration2 = pulseIn(9,HIGH);
  distance2=(duration2/2)/29.1;
  Serial.print(distance2);
  Serial.println("   ");
  delay(10);
  
  digitalWrite(10,HIGH);
  delay(10);
  digitalWrite(10,LOW);
  duration3 = pulseIn(11,HIGH);
  distance3=(duration3/2)/29.1;
  Serial.print(distance3);
  Serial.println("   ");
  delay(10);
  
  if(distance1<=20 && distance1<distance2 && distance1<distance3)
  {
   Serial.println(" 1 obstacle");
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   delay(2000);
  }
  else
  if(distance2<=20 && distance2<distance1 && distance2<distance3)
   {
    Serial.println(" 2 obstacle");
   digitalWrite(3,LOW);
   digitalWrite(2,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(5,HIGH);
   delay(500);
   }
   else
   if(distance3<=20 && distance3<distance1 && distance3<distance2)
   {
    Serial.println(" 3 obstacle");
   digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(4,HIGH);
   delay(500);
   }
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(5,LOW);
   digitalWrite(4,LOW);
}
