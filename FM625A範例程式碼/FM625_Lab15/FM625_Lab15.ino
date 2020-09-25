void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void loop() {
  int base = 25;
  float value = analogRead(A0);
  float voltage = (value / 1024) * 5;
  float tempValue = (voltage - 0.5) * 100;
  // 將溫度值減去基準值 25 度並轉換為 int 整數型別
  int x = tempValue - base;
  Serial.println(x);
  if (x < 0) { // 限制 x 的數值為高於基準值 4 度以內
    x = 0;
  }
  if (x > 4) {
    x = 4;
  }
  switch (x) {
    case 0:    // 若溫度為 25 度以下則亮藍燈
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      break;
    case 2:    // 若溫度為 27 度則亮綠燈
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      break;
    case 4:    // 若溫度為 29 度以上則亮紅燈
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      break;
  }
}
