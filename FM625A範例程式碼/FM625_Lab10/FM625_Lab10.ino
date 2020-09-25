void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);// 將 A0 腳位設定成輸入模式
}

void loop() {
  // 將類比腳位讀到的數值儲存在 value 變數中
  int value = analogRead(A0);
  // 將數值顯示在監控視窗中, 每一行顯示一筆數值
  Serial.println(value);
  delay(100);
}
