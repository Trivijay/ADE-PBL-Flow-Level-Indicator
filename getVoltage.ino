float signalValue=0;
float voltage=0;

float getVoltage(int voltagePin)
{
        signalValue = analogRead(voltagePin);
        voltage = (signalValue*5000)/1023;

        return voltage;
}
