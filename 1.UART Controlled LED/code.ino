    String command;
    bool LEDstate = false;


void setup(){

    Serial.begin(9600); 
    DDRB |= (1<<5);                          //output pin LED

}

void loop(){

    
 
    if(Serial.available()){

        command = Serial.readString();
        command.trim();                        //removes extra spaces 
    


           if(command == "ON"){
            PORTB |= (1<<5);                  //turning on bit 5 ie, pin 13(LED)

         LEDstate = true;
        }

        else if(command == "OFF"){

            PORTB &= ~(1<<5);                      // turning off LED

            LEDstate = false;
        }

        else if(command == "STATUS"){

            if(LEDstate==false){

                Serial.println("LED is OFF");
            }

            else{

                Serial.println("LED is ON");
            }
        }
    }

    else{

        Serial.println("Invalid Command");
    }
    
    }


