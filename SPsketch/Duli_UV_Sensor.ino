int PRdata;
int UVdata;

void setup() {
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    PRdata = analogRead(A0);
    UVdata = analogRead(A1);
    Serial.print("\nPhotoresistor\tUV Sensor\n");
    Serial.print("-------------------------------\n");
    Serial.print(PRdata);
    Serial.print("\t\t");
    Serial.println(UVdata);
    delay(500);
}
