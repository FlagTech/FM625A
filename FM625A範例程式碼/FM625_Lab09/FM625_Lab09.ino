void setup() {
  Serial.begin(9600);// 初始化序列通訊埠並設定鮑率為 9600
  Serial.println("You can't see me!!!");
}

void loop() {
  for (int i = 0 ; i < 256; i++) {
    Serial.println(i);// 顯示變數 i 在當下的數值
    delay(5);// 暫停 5 毫秒
  }
  
  for (int j = 256 ; j > 0; j--) {
    Serial.println(j);// 顯示變數 j 在當下的數值
    delay(5);// 暫停 5 毫秒
  }
}
