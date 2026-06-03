enum State{
    AUTOMATIC,
    RAIN,
    MANUAL,
    ERROR
};

State currentstate = AUTOMATIC;


int moisture;
bool rain = false;
int moistureThreshold = 350;
unsigned long previoustime =0;
bool buttonstate = false;

void setup(){

    Serial.begin(9600);

    DDRB |= (1<<0);           //pin 8 pump 
    pinMode(2,INPUT);        // pin 2 manual button 
    pinMode(3,INPUT);        //rain sensor 

}

void loop(){ 

if((millis()-previoustime)>=1000){

buttonstate =digitalRead(2);
moisture = analogRead(A0);
rain = digitalRead(3);

previoustime = millis();

Serial.print("moisture");
Serial.println(moisture);


}


switch (currentstate){

    case AUTOMATIC: 

    if(moisture<=moistureThreshold){
        PORTB |= (1<<0);                  //switch on pump (pin 8)

    }

    if(moisture>moistureThreshold){
        PORTB &= ~(1<<0);                 //switch off pump 
    }


    if(buttonstate == 1){

        currentstate = MANUAL;
    }

    else if(rain == true){

        currentstate = RAIN;
    }

    break;


    case RAIN:

    PORTB &= ~(1<<0);          //switch off pump


    if(buttonstate == 1){

        currentstate = MANUAL;      //Manual button state
    }

    else if(rain == false){

        currentstate = AUTOMATIC;
    }

    break;

    case MANUAL:

        PORTB |= (1<<0);              // in manual pump always on 

    if(buttonstate == 0){

        currentstate = AUTOMATIC;       //back to automatic 
    }
    break;

    case ERROR:{

    }
    break;
    
}


}



