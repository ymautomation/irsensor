//YM Automation ----------- IR Sensor Tutorials

// Variable declaration here

int Sensorval;

void setup() {
  int Sensorval = 0;
  pinMode(8, INPUT);
  Serial.begin(9600);

}

void loop() {

  Sensorval = digitalRead(8);
  // Remove comment to see the Digital data
 // Serial.println(Sensorval);

  // Application Part
  // Detection of paper color White or Black

  // Conditions

  if (Sensorval == 1)
  {
    Serial.print("WHITE");
  }
  else
  {
    Serial.print("BLACK");
  }

}
