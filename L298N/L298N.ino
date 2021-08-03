int speed=255;
char Incoming_value = 0;

void setup() {
Serial.begin(9600);     
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(5,OUTPUT);
analogWrite(5,speed);
}
void loop() {
 if(Serial.available() > 0)  
 {
  Incoming_value = Serial.read();      
  Serial.print(Incoming_value);        
  Serial.print("\n");        
  if(Incoming_value == '1') 
  {            
        digitalWrite(6, LOW);
        digitalWrite(7, HIGH);
  }
  else if(Incoming_value == '2')
  {       
        digitalWrite(7, LOW);
        digitalWrite(6, HIGH);
  }
  else if(Incoming_value == '4')       
    Serial.println("Left");
   else if(Incoming_value == '3')       
    Serial.println("Right");  
}                            



}
