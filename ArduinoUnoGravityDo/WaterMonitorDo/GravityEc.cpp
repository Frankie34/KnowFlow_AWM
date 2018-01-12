#include "GravityEc.h"
#include "Config.h"

extern uint16_t readMedianValue(int* dataArray, uint16_t arrayLength);

GravityEc::GravityEc() :kValue(1.0), pin(ECPIN)
{
}


GravityEc::~GravityEc()
{
}

//********************************************************************************************
// function name: setup ()
// Function Description: Initializes the sensor
//********************************************************************************************
void GravityEc::setup()
{
	pinMode(pin, INPUT);
}


//********************************************************************************************
// function name: update ()
// Function Description: Update the sensor value
//********************************************************************************************
void GravityEc::update()
{
	int ecValueBuffer[ARRAYLENGTH];
	float averageVoltage;
	for (uint8_t i = 0; i < ARRAYLENGTH; i++)
	{
		ecValueBuffer[i] = analogRead(this->pin);
		delay(10);
	}
	averageVoltage = readMedianValue(ecValueBuffer, ARRAYLENGTH)/1024.0*5000.0;
	this->ecValue = 1000 * averageVoltage / 820.0 / 196.0 /this->kValue;

}

//********************************************************************************************
// function name: getValue ()
// Function Description: Returns the sensor data
//********************************************************************************************
double GravityEc::getValue()
{
	return this->ecValue;
}

void GravityEc::setKValue(float value)
{
	this->kValue = value;
}