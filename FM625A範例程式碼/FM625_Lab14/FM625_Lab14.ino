void setup() {
  Serial.begin(9600);
}

void loop() {
  float value = analogRead(A0);
  // 將 0~1023 的類比數值轉換成 0V~5V 的電壓數值
  float voltage = (value/1024)*5;
  // 將電壓數值轉換成攝氏溫度值
  float tempValue = (voltage- 0.5)*100;
  Serial.println(tempValue);
  delay(200);
}
