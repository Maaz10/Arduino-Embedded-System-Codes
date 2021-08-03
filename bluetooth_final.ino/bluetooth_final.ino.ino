char Incoming_value = 0;               
void setup() 
{
  Serial.begin(9600);         
}
void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1')             
      Serial.println("Front ");  
    else if(Incoming_value == '2')       
      Serial.println("Reverse");
    else if(Incoming_value == '4')       
      Serial.println("Left");
     else if(Incoming_value == '3')       
      Serial.println("Right");  
  }                            
 
}                 
