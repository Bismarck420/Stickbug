#include <PCA95x5.h>

PCA9555 ioex;

void setup() {
    Serial.begin(115200);
    delay(2000);

    pinMode(4, OUTPUT);
    pinMode(13, OUTPUT);
    
    pinMode(16, INPUT);


    Wire.begin();
    ioex.attach(Wire);
    ioex.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
    ioex.direction(PCA95x5::Direction::OUT_ALL);
    ioex.write(PCA95x5::Level::L_ALL);
}

void loop() {
  setServoPos(0, 17);
  delay(1000);
  setServoPos(180, 17);
  delay(1000);

}

void walk(bool direction, int magnitude){
//1, 3, 5 nach vorne
//1, 3, 5 zurück -> 
}

void turn(int angle, int magnitude){

}


void setServoPos(double angle, int servNum){
  double del1 = 75 + angle/180 * 1925;
  double del2 = 20000 - del1;

  switch(servNum){
    case 1:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P00, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P00, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 2:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P01, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P01, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 3:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P02, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P02, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 4:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P03, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P03, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 5:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P04, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P04, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 6:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P05, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P05, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 7:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P06, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P06, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 8:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P07, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P07, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 9:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P08, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P08, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 10:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P09, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P09, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 11:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P10, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P10, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 12:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P11, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P11, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 13:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P12, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P12, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 14:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P13, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P13, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 15:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P14, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P14, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 16:
      for(int i = 0; i <= 4; i++){
        ioex.write(PCA95x5::Port::P15, PCA95x5::Level::H);
        delayMicroseconds(del1);
        ioex.write(PCA95x5::Port::P15, PCA95x5::Level::L);
        delayMicroseconds(del2);
      }
      break;
    case 17:
      for(int i = 0; i <= 4; i++){
        digitalWrite(4, HIGH);
        delayMicroseconds(del1);
        digitalWrite(4, LOW);
        delayMicroseconds(del2);
        

        Serial.print("del1: ");
        Serial.println(del1);
        Serial.print("del2: ");
        Serial.println(del2);
      }

      break;
    case 18:
    for(int i = 0; i<= 4; i++){
      digitalWrite(13, HIGH);
      delayMicroseconds(del1);
      digitalWrite(13, LOW);
      delayMicroseconds(del2);
    }

      break;
  }
}
