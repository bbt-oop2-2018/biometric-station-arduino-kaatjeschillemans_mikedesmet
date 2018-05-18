#include "Wire.h"
#define TMP102_I2C_ADDRESS 72

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Wire.begin();


}
void temperaturemesuring(){
byte firstbyte, secondbyte; 

Wire.beginTransmission(TMP102_I2C_ADDRESS); //Say hi to the sensor.
Wire.write(0x00);
Wire.endTransmission();
Wire.requestFrom(TMP102_I2C_ADDRESS, 2);
Wire.endTransmission(); 

firstbyte = (Wire.read());
secondbyte     = (Wire.read());
Serial.print(firstbyte);
Serial.print(",");
Serial.print(secondbyte);
Serial.println("°C");  
}

void loop() {
temperaturemesuring();
   delay(2500);
}
