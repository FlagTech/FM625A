void setup() {
  pinMode(3, INPUT);  // 將 3 號腳位設為輸入模式
  pinMode(13, OUTPUT);// 將 13 號腳位設為輸出模式
}

void loop() {
  bool status = false;    // 宣告一個變數 status 並儲存為 false
  status = digitalRead(3);// 讀取並儲存 3 號腳位的電位狀態
  if (status == true) {   // 若 status 為 true 則進入此區塊
    digitalWrite(13, HIGH);
  }
  else {// 若 status 不為 true 則進入此區塊
    digitalWrite(13, LOW);
  }
}
