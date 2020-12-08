int sensorPin = A0;
int sensorValue;
int limit = 300;

void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);int sensorPin = A0;
int sensorValue;
int limit = 300;

void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);
  Serial.println("Analoginen arvo : ");
  //Serial.println(sensorValue);
  
  if (sensorValue<limit) 
  {
    digitalWrite (13, HIGH);
    digitalWrite (11, LOW);
    tone (12, 261);
  }
  else 
    {
    digitalWrite (13, LOW);
    noTone (12);
    digitalWrite (11, HIGH);
    }
  delay (1000);
}    
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
  sensorValue = analogRead(sensorPin);
  Serial.println("Analoginen arvo : ");
  //Serial.println(sensorValue);
  
  if (sensorValue<limit) 
  {
    digitalWrite (13, HIGH);
    digitalWrite (11, LOW);
    tone (12, 261);
  }
  else 
    {
    digitalWrite (13, LOW);
    noTone (12);
    digitalWrite (11, HIGH);
    }
  delay (1000);
}    
