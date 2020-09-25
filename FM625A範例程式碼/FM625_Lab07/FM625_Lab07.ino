void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  if (!digitalRead(3)) {// 當輸入腳位接收到低電位時 if 條件成立
    digitalWrite(13, HIGH);
  }
  else {// 當輸入腳位接收到高電位 (開關斷路) 時 else 條件成立
    digitalWrite(13, LOW);
  }
}
