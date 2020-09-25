#include <Servo.h>

Servo myservo;// 宣告一個名為 myservo 的 Servo 物件

void setup() {
  myservo.attach(9);// 將 9 號腳位指定為控制伺服馬達的腳位
}

void loop() {
  int value = analogRead(A0);
  int angle = map(value, 0, 1023, 0, 180);// 將類比值轉為角度值
  myservo.write(angle);// 使馬達轉動到特定角度
  delay(15);
}
