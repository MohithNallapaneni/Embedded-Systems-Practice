int pwmvalue;
int adcvalue;


void setup(){

    DDRB |= (1<<1);  //pin 9 as output (LED)
    
    
}

void loop(){

    adcvalue = analogRead(A0);  //potentiometer

    pwmvalue = map(adcvalue,0,1023,0,255);   //mapping adc values (0-1023) to pwm values(0-255)

    analogWrite(9,pwmvalue);
}