int trigpin = 8;
int echopin = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop()
{
  long duration,distance;
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
