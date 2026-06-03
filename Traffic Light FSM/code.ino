
enum State{
    RED,
    GREEN,
    YELLOW
};

State currentstate = RED;
unsigned long previoustime =0;

void setup(){

    DDRB |= (1<<0);   //pin 8 output RED 
    DDRB |= (1<<1);  //pin 9 output GREEN
    DDRB |= (1<<2);   //pin 10 output YELLOW

}

void loop(){

    switch(currentstate){

        case RED:

        PORTB |= (1<<0);
        PORTB &= ~(1<<1);      //switch on RED 
        PORTB &= ~(1<<2);

        if((millis()-previoustime)>=5000){

            currentstate = GREEN;                  //if 5 sec have passed change state to GREEN
            previoustime = millis();
        
        }
        break;



        case GREEN:
        PORTB |= (1<<1);
        PORTB &= ~(1<<0);      // turn on GREEN
        PORTB &= ~(1<<2);

        if((millis()-previoustime)>=5000){

            currentstate = YELLOW;                  // if 5 sec have passed change state to YELLOW
            previoustime = millis();
        
        }

        break;

        case YELLOW:
        PORTB |= (1<<2);
        PORTB &= ~(1<<1);      // turn on YELLOW
        PORTB &= ~(1<<0);

        if((millis()-previoustime)>=2000){

            currentstate = RED;                     // if 2 sec have passed change state to RED
            previoustime = millis();
        
        }

        break;

    }
}


