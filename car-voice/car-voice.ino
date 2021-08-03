char Incoming_value = 0;

void setup() {
    
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  Serial.begin(9600);   
}

void loop() {
 if(Serial.available() > 0)  
 {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n"); 

    if(Incoming_value == '1') 
    {            
        Serial.println("  1  ");
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(750);
    }
    else if(Incoming_value == '2')
    {   
        Serial.println("  2  ");    
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        delay(750);
    }

    else if(Incoming_value == '3') 
    {    
        Serial.println("  3  ");   
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        delay(150);
    }      
   else if(Incoming_value == '4')
   {       
        Serial.println("  4  ");
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(150);
    }   
    else
    if(Incoming_value == '5') 
    {            
        Serial.println("  1  ");
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(1000);
    }
    else if(Incoming_value == '6')
    {   
        Serial.println("  2  ");    
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        delay(1000);
    }

    else if(Incoming_value == '7') 
    {    
        Serial.println("  3  ");   
        digitalWrite(3, LOW);
        digitalWrite(4, HIGH);
        digitalWrite(6, LOW);
        digitalWrite(5, HIGH);
        delay(300);
    }      
   else if(Incoming_value == '8')
   {       
        Serial.println("  4  ");
        digitalWrite(4, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(300);
    }   
        digitalWrite(3, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);    
}                            
}
