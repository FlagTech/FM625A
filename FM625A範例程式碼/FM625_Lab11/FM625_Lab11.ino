int C = 523;
int D = 587;
int E = 659;
int F = 698;
int G = 783;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  int value = analogRead(A0);
  Serial.println(value);
  if (value > 600) {
    tone(2, C);
  }
  else if (value > 400 && value <= 600) {
    tone(2, D);
  }
  else if (value > 320 && value <= 400) {
    tone(2, E);
  }
  else if (value > 250 && value <= 320) {
    tone(2, F);
  }
  else if (value > 10) {
    tone(2, G);
  }
  else {        // 當 A0 腳位讀取到 10 以下的值時, 蜂鳴器不發聲
    noTone(2);
  }
}
