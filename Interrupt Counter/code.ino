volatile int count =0;
int previouscount;

void buttonpress(){
    count++;
}

void setup(){

    Serial.begin(9600);

    pinMode(2,INPUT_PULLUP);  //deafult on 

    attachInterrupt(
    digitalPinToInterrupt(2),
    buttonpress,
    FALLING 
);

}

void loop(){

    if(count != previouscount){

        Serial.println(count);               // this removes same output printing again and again 

        previouscount = count;
    }


}











