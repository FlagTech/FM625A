void setup() {
  pinMode(13,OUTPUT);// 將第 13 號腳位設為 OUTPUT 模式
}

void loop() {
  digitalWrite(13,HIGH);// 將 LED 燈點亮
  delay(500);// 將程式碼暫停執行 500 毫秒 (0.5秒)
  digitalWrite(13,LOW);// 將 LED 燈熄滅
  delay(500);// 將程式碼暫停執行 500 毫秒 (0.5秒)
}
