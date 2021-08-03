int trigpin = 10;
int echopin = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop()
{
  long duration1,distance1,duration2,distance2,duration3,distance3;
  digitalWrite(trigpin,HIGH);
  delay(1000);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  delay(10);

  digitalWrite(trigpin,HIGH);
  delay(1000);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  delay(10);

  digitalWrite(trigpin,HIGH);
  delay(1000);
  digitalWrite(trigpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance=(duration/2)/29.1;
  delay(10);
  
  if(distance<=20)
  {
    Serial.print("OBSTACLE ");
     Serial.print(distance);
     Serial.println("cm");
  }
  else
  {
   Serial.print("NO OBSTACLE "); 
     Serial.print(distance);
     Serial.println("cm");
  }
}
