#pragma once

#include "ISensor.h"
#include "Arduino.h"
#include "Config.h"

class GravityDo: public ISensor
{
public:
	GravityDo();
	~GravityDo();

public:

    //initialization
	void setup();

    //update senser value
	void update();

    //set sensor pin
    void setPin(int pin);

    //get sensor data
	double getValue();

    //get temperature value
    float getTemperature() const;

    //set temperature value
    void setTemperature(float temperature);

private:
    int    _pin;
    int    _vref;
    float  _temperature;
	double _doValue;

    float  _saturationDoVoltage;
    float  _saturationDoTemperature;
    float  _averageVoltage;
};  

