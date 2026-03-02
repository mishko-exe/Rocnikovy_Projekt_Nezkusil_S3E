#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3);  // RX, TX

const int buzzer = 5;
const int led_stripe = 6;
const int rst = 4;

bool answer = false;
bool alarmActive = false;
unsigned long lastToggle = 0;
const unsigned long interval = 200; // rychlost blikání

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(led_stripe, OUTPUT);
  pinMode(rst, INPUT);
  pinMode(8, OUTPUT);

  digitalWrite(buzzer, LOW);
  digitalWrite(led_stripe, LOW);
  digitalWrite(8, HIGH);
  answer = false;

  BT.begin(9600);
  Serial.begin(9600);
  BT.println(";)");
}

void loop() {
  // Pokud přijde zpráva z HC-05, aktivuje se alarm
  if (BT.available()) {
    digitalWrite(8, LOW);
    char bebra = BT.read();
    Serial.print("Přijato: ");
    Serial.println(bebra);
    if (bebra == '!'){
      alarmActive = true;
    }
  }

  // Pokud je alarm aktivní → blikání + bzučák
  if (alarmActive) {
    unsigned long currentMillis = millis();
    answer = true;

    if (currentMillis - lastToggle >= interval) {
      lastToggle = currentMillis;

      static bool state = false;
      state = !state;

      // blikání LED
      digitalWrite(led_stripe, state);

      // bzučák zap/vyp
      digitalWrite(buzzer, state);
    }
  }
  else {
    digitalWrite(led_stripe, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(8, HIGH);
    answer = false;
  }
  if (digitalRead(rst) == HIGH){
    if (answer == true){
      BT.println("Přijato");
      alarmActive = false;
      answer = false;
    }
  }
}