

int Shit = 13;
int y=500;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(Shit, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);   // delay in between reads for stability
  
  if (sensorValue >= y)
        {digitalWrite(Shit, HIGH);   // sets the LED on
          delay(1000);                  // waits for a second
          digitalWrite(Shit, LOW);    // sets the LED off
          delay(1000);                  // waits for a second
        }
}
