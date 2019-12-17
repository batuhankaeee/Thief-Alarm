// lazer sensörü d7 , buzzer d9da , ldr a0
int ldrPin = A0;
int buzzerPin = 9;
int ldrValue = 0;
void setup() {
   pinMode(9,OUTPUT);
   pinMode(ldrPin,OUTPUT);
   pinMode(7,OUTPUT);

   Serial.begin(9600);
}

void loop() {
digitalWrite(7,HIGH);

 ldrValue = analogRead(A0);
 Serial.println(ldrValue);

if(ldrValue<=10)
  {
  digitalWrite(buzzerPin,HIGH);
  }
else
  {
   digitalWrite(buzzerPin,LOW);
  }
   


}
