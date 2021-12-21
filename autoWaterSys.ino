int digitalSensor = 2; //initialize the soil moisture sensor 
int pumpPin = 8;  //initialize the water pump pin

void setup() {
  pinMode(digitalSensor, INPUT); //state that the soil moisture sensor is the input
  pinMode(pumpPin, OUTPUT); //state that the water pump is the output
  Serial.begin(9600);
}

void loop() {
  int moistureLevel = analogRead(A0);
  Serial.println(moistureLevel);
  if(analogRead(moistureLevel) <= 500){ //checks if the soil moisture sensor reads LOW
    digitalWrite(pumpPin, HIGH); //turns on the water pump
  }
  else
  {
        
    digitalWrite(pumpPin, LOW);//if the soil moisture sensor reads HIGH, do nothing
  
  }

}
