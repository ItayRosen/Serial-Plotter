# Serial-Plotter
Plot real-time charts with data from serial port

# Preview
![screenshot](https://i.imgur.com/87oVmCd.png)

# Syntax
The syntax for input data from the serial port should be as follows: `:datapoint1,datapoint2,timestamp;`. Of course the number of datapoints is up to you and should be seperated by a comma. The beggining of the string should start with a colon (:) and should end with a semicolon (;).

# How to use
1. Start by opening the program (for a quick start using a windows machine, download the `windows` folder under `dst` and open `Serial Plotter.exe`).

2. Next, add the datasets by clicking on the plus button next to `Datasets`.

3. Now all is left is to connect to the serial port (by clicking on the green power button) and start receiving data.

4. You can use the next three buttons to take a screenshot of the chart, pause the plotting and clear the chart of its data.

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
