


const int trigPin = 9; 
const int echoPin = 10;

#define red 8
#define green 7
#define white 12

#define buzzer 6



long duration; 
int distance;
int sound =1000;

  void setup() 
{
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
    
    pinMode(red,OUTPUT);
    pinMode(green,OUTPUT);
    pinMode(white,OUTPUT);

    pinMode(buzzer, OUTPUT);

    Serial.begin(9600); 
     
}


   void loop()
  {
      digitalWrite(trigPin, LOW); 
      delayMicroseconds(2);
      
      digitalWrite(trigPin, HIGH); 
      delayMicroseconds(10);
      
      digitalWrite(trigPin, LOW);
      duration = pulseIn(echoPin, HIGH); 
      
      distance= duration*0.034/2;   
      
  
        if (distance > 0 && distance <= 10)
       {
           digitalWrite(red, HIGH);
           sound = 1000 ;
         
          
       }
         else {
                 digitalWrite(red,LOW);
              }

        if (distance > 10 && distance <= 20)
       {
           digitalWrite(green, HIGH);
           sound =  600   ;
       }
         else {
                 digitalWrite(green,LOW);
              }

        if (distance > 20 && distance <= 40)
       {
           digitalWrite(white, HIGH);
           sound =   300  ;
            
          
       }
         else {
                 digitalWrite(white,LOW);
              }

 
       if (distance > 40 || distance <= 0)
      {
           Serial.println("Out of The Range");
           noTone(buzzer);
          
      }
        else 
         {
           Serial.print("Distance : ");
           Serial.print(distance);
           Serial.println(" cm");
           tone(buzzer, sound);

         }
         
       delay(1000);

      
   

}
