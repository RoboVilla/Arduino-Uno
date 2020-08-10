//RoboVilla YouTube Channel
//Watch Full Video URL - https://www.youtube.com/watch?v=Ri1rZJmIgeg

int led1 = 13 ;
int led2 = 12 ;
int led3 = 11 ;
int led4 = 10 ;
int led5 = 9 ;
int led6 = 8 ;
int led7 = 7 ;
int led8 = 6 ;
int led9 = 5 ;
int led10 =4 ;

void setup() 
{
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
  pinMode(led5 , OUTPUT);
  pinMode(led6 , OUTPUT);
  pinMode(led7 , OUTPUT);
  pinMode(led8 , OUTPUT);
  pinMode(led9 , OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop() 
{
   // LED1, LED10
    digitalWrite(led1,HIGH);
    digitalWrite(led10,HIGH);  
    delay(100);
                     
   // LED2, LED9
    digitalWrite(led2,HIGH);  
    digitalWrite(led9,HIGH);  
    delay(100);                 
      
   // LED3, LED8
    digitalWrite(led3,HIGH);
    digitalWrite(led8,HIGH);
    delay(100);                 
    
   // LED4, LED7
    digitalWrite(led4,HIGH);  
    digitalWrite(led7,HIGH);
    delay(100);                 
    
   // LED5, LED6
    digitalWrite(led5,HIGH); 
    digitalWrite(led6,HIGH); 
    delay(100);

   // LED5, LED6
    digitalWrite(led5,LOW); 
    digitalWrite(led6,LOW); 
    delay(100);
    
   // LED4, LED7
    digitalWrite(led4,LOW);  
    digitalWrite(led7,LOW);
    delay(100); 
    
   // LED3, LED8
    digitalWrite(led3,LOW);
    digitalWrite(led8,LOW);
    delay(100);
    
   // LED2, LED9
    digitalWrite(led2,LOW);  
    digitalWrite(led9,LOW);  
    delay(100); 
    
   // LED1, LED10
    digitalWrite(led1,LOW);
    digitalWrite(led10,LOW);  
    delay(100);
                     
    
                
      
                 
    
                
    
    
    
                 

    
}
