#define C 523
#define D 587
#define E 659
#define F 698
#define G 783

int maxValue = 0;    // 將最大值設為 0
int minValue = 1023; // 將最小值設為 1023
int interval = 0;

void setup() {
  Serial.begin(9600);
  unsigned long pastTime = millis();
  Serial.println("開始校正環境光線");
  // 找出環境光線的最大與最小值, 就是演奏時可以感測光線的範圍
  while (millis() - pastTime < 5000) {
    int sensorValue = analogRead(A0);
    if (sensorValue > maxValue) {// 更新感測到的最大值
      maxValue = sensorValue;
    }
    if (sensorValue < minValue) {// 更新感測到的最小值
      minValue = sensorValue;
    }
  }
  Serial.println("校正結束, 開始演奏音樂!");
  // 將可感測光線的區域分為 6 個區間, 代表 5 個音階區間和靜音區間
  interval = (maxValue - minValue) / 6;
}

void loop() {
  int value = analogRead(A0);
  // 偵測到的數值在第 6 區間時執行此區塊
  if (value > minValue + interval * 5) {
    tone(2, C);
    Serial.println("C");
    delay(200);
    noTone(2);
    delay(300);
  }
  // 偵測到的數值在第 5 區間時執行此區塊
  else if (value > minValue + interval * 4) {
    tone(2, D);
    Serial.println("D");
    delay(200);
    noTone(2);
    delay(300);
  }
  // 偵測到的數值在第 4 區間時執行此區塊
  else if (value > minValue + interval * 3) {
    tone(2, E);
    Serial.println("E");
    delay(200);
    noTone(2);
    delay(300);
  }
  // 偵測到的數值在第 3 區間時執行此區塊
  else if (value > minValue + interval * 2) {
    tone(2, F);
    Serial.println("F");
    delay(200);
    noTone(2);
    delay(300);
  }
  // 偵測到的數值在第 2 區間時執行此區塊
  else if (value > minValue + interval) {
    tone(2, G);
    Serial.println("G");
    delay(200);
    noTone(2);
    delay(300);
  }
  // 偵測到的數值在第 1 區間時執行此區塊
  else {
    noTone(2);
    Serial.println("no sound");
    delay(500);
  }
}
