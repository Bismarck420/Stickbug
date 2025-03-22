hw_timer_t *timer = timerBegin(1000000);


void IRAM_ATTR onTimer(){
Serial.println("test");

}


float frequency;
bool count = false;
unsigned int t1 = 0;

void setup() {
Serial.begin(230400);
delay(2000);


attachInterrupt(digitalPinToInterrupt(16), ISR_flank_detected, RISING);

pinMode(33, OUTPUT);
pinMode(16, INPUT);

timerAttachInterrupt(timer, &onTimer);
timerAlarm(timer, 100, true, 0);
timerStart(timer);
}


void loop() {
  digitalWrite(33, HIGH);
  delay(10);
  digitalWrite(33, LOW);
  delay(10);
}

void ISR_flank_detected(void) {
  if(count){
    //t1 = timerRead(timer);
    //timerWrite(timer, 0);
    Serial.println(t1);
    count = false;
  }

  count = true;
}