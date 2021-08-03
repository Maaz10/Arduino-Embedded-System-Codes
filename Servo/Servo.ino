#include <Servo.h>

Servo servo;

char Incoming_value = 0;  

void setup() {
  
  servo.attach(8);
  servo.write(90);
  Serial.begin(9600); 
}

void loop() 
{ 
  int angle=10;
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '4')
    {             
         Serial.println("Left");
         servo.write(angle);
         angle-=10;               
         delay(15); 
    }
    else if(Incoming_value == '3')       
    {
         Serial.println("Right");
         servo.write(angle);               
         angle+=10;
         delay(15);  
     }       
   }
}
