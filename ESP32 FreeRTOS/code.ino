void LEDTask(void *pvParameters);
void SerialTask(void *pvParameters);

void setup(){

    Serial.begin(115200);
    pinMode(2,OUTPUT);


    xTaskCreate(
    LEDTask,
    "LED",
    2048,        
    NULL,       
    1,          
    NULL        
);

xTaskCreate(
    SerialTask,
    "Serial",
    2048,        
    NULL,       
    1,          
    NULL        
);

}

void loop(){

}

void LEDTask(void *pvParameters)
{
    while(1)
    {
        digitalWrite(2,HIGH);  //LED high
    

    vTaskDelay(pdMS_TO_TICKS(1000)); 

    digitalWrite(2,LOW);      //LED low

    vTaskDelay(pdMS_TO_TICKS(1000));   
    }
}

void SerialTask(void *pvparameters)
{
    while(1)
    {
        Serial.println("Serial Task Running");

        vTaskDelay(pdMS_TO_TICKS(1000)); 
    }
}
