char veri;                           
int kirmiziPin = 9;                 
int sariPin = 10;                        
int maviPin = 11;                   
void setup() {
  Serial.begin(9600);              
  pinMode(kirmiziPin,OUTPUT);      
  pinMode(sariPin,OUTPUT);        
  pinMode(maviPin,OUTPUT);        
}
void loop() {
  if(Serial.available()>0){         
    veri = Serial.read();          
  }
  if(veri == 's'){                  
    digitalWrite(kirmiziPin,HIGH);   
    digitalWrite(sariPin,LOW);
    digitalWrite(maviPin,LOW);
    
  }
  else if(veri == 'y'){             
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(sariPin,HIGH);
    digitalWrite(maviPin,LOW);
    
  }
  else if(veri == 'm'){             
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(sariPin,LOW);
    digitalWrite(maviPin,HIGH);
   
  }
  else{                             
    digitalWrite(kirmiziPin,LOW);
    digitalWrite(sariPin,LOW);
    digitalWrite(maviPin,LOW);
  }
}
