int RED = D5; 
int GREEN = D6; 

SYSTEM_THREAD(ENABLED);

void setup() 
   {
     
    pinMode(RED,OUTPUT); 
    pinMode(GREEN,OUTPUT); 
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", handleEvent);  
    }

void RED_on()
{
    digitalWrite(RED, HIGH);
    delay(1s); 
    digitalWrite(RED, LOW); 
    delay(1s);  
}

void GREEN_on()
{
    digitalWrite(GREEN, HIGH);
    delay(1s);
    digitalWrite(GREEN, LOW);
    delay(1s);
}


void handleEvent(String event, String data)
   { 
     if(data == "wave")
     {  
         
        RED_on(); 
        RED_on();
        RED_on();
     }
    else if (data == "pat")
    {  
        
       GREEN_on();
       GREEN_on();
       GREEN_on();
       GREEN_on();
       GREEN_on();
    }
   
}
 
