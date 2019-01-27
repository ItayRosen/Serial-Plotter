#define sensor1 1
#define sensor2 2

void setup() {
  Serial.begin(9600);
  pinMode(1,INPUT);
  pinMode(2,INPUT);
}

void loop() {

  int sensor1_data = digitalRead(sensor1);
  int sensor2_data = digitalRead(sensor2);
  long timestamp = millis();
  
  String dataline = String(sensor1_data) + "," + String(sensor2_data) + "," + timestamp + ";";
  Serial.print(dataline);
}