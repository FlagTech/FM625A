void setup() {
  pinMode(2, OUTPUT);// 將第 2 號腳位設為 OUTPUT 模式
}

void loop() {
  digitalWrite(2, HIGH);// 讓 2 號腳位輸出高電位點亮 LED 燈
  delay(500);           // 將程式碼暫停執行 500 毫秒 (0.5秒)
  digitalWrite(2, LOW); // 讓 2 號腳位輸出低電位熄滅 LED 燈
  delay(500);           // 將程式碼暫停執行 500 毫秒 (0.5秒)
}
