#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include<Wire.h>

int adc;
int pwm;
int duty;

Adafruit_SSD1306 display(    
    128,                        //width
    64,                         //height
    &Wire,                      //which communication is used what what 
    -1   
);

void setup(){

    Serial.begin(115200);

    Wire.begin(
        21,22             //SDA &SCL for I2C
    );


    pinMode(34,INPUT);

    display.begin(SSD1306_SWITCHCAPVCC,0x3C);

    ledcAttach(25,5000,8);

    display.setTextSize(1);

    display.setTextColor(
    SSD1306_WHITE);


    
}

void loop(){

    adc = analogRead(34);
    pwm = map(adc,0,4095,0,255);

    ledcWrite(25,pwm);

    duty = (pwm*100)/255;

    display.setCursor(0,0);

    display.println(adc);
    display.println(pwm);
    display.println(duty);

    display.clearDisplay();

    display.display();


}