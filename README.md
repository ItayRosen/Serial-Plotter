# Serial-Plotter
Plot real-time charts with data from serial port

# Preview
![screenshot](https://i.imgur.com/NrZMD25.png)

# How to use
The program receives data over the serial port (of your choice) and plots a chart with it. The syntax for the data should be like this:
`datapoint1,datapoint2,timestamp;`
Meaning you need to separate the datapoints with a comma (,) and at the end of the dataline, add a delimiter (;). The last datapoint should be the timestamp.
The number of datapoints has to match the number of datasets (use Add Dataset button).

# Quick start
For Windows platform, download the win folder (dst -> win32-x64) and run `Serial Plotter.exe`.

# Arduino example
```
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
```
