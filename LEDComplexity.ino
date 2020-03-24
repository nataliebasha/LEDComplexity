int ExternalLED = 12;
int InternalLED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ExternalLED, OUTPUT);
  pinMode(InternalLED, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if(sensorValue>=2000){
    digitalWrite(ExternalLED, HIGH);  
    digitalWrite(InternalLED, LOW);   
  } else {
      digitalWrite(ExternalLED, LOW);
      digitalWrite(InternalLED, HIGH);
  }
}
