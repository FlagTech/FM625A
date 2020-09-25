void setup() {
  Serial.begin(9600);
  unsigned long pastTime = millis();
  // 若當下的時刻距離上次儲存的時間不超過 5 秒
  // 若當下的時刻距離上次儲存的時間不超過 5 秒
  while (millis() - pastTime < 5000) {
    // 將開機後經過的秒數顯示在監控視窗中
    Serial.println(millis() - pastTime);
  }
}

void loop() {

}
