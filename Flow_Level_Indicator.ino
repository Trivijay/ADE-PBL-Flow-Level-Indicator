#define LEVEL0 A0
#define LEVEL1 A1
#define LEVEL2 A2
#define LEVEL3 A3

#define THRESHOLD 4600

float level0=0;
float level1=0;
float level2=0;
float level3=0;
 
void setup()
{
        Serial.begin(9600);
}

void loop()
{
        level0 = getVoltage(LEVEL0);
        level1 = getVoltage(LEVEL1);
        level2 = getVoltage(LEVEL2);
        level3 = getVoltage(LEVEL3);

        if(level0<THRESHOLD) //Level0 full
        {
            if(level1<THRESHOLD)
            {
                if(level2<THRESHOLD)
                {
                    if(level3<THRESHOLD)
                    {
                        Serial.println("The pipe is completely filled");
                    }
                    else{Serial.println("The pipe is 75% filled");}
                }
                else{Serial.println("The pipe is 50% filled");}
            }
            else{Serial.println("The pipe is 25% filled");}
        }
        else{Serial.println("The pipe is less than 25% filled");}
        
        delay(2000);
}
