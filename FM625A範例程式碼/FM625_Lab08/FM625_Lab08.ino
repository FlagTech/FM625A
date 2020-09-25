void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  for (int i = 0 ; i < 256; i++) {// 第 1 個迴圈
    analogWrite(3,i);
    delay(5);
  }
  
  for (int i = 256 ; i > 0; i--) {// 第 2 個迴圈
    analogWrite(3,i-1);
    delay(5);
  }
}
