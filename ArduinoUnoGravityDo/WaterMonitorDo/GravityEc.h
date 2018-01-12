#pragma once
#include "ISensor.h"
#include "Arduino.h"
class GravityEc : public ISensor
{
public:
	GravityEc();
	~GravityEc();

public:

	//initialize
	void setup();

	//update sensor value
	void update();

	//get sensor value
	double getValue();

	//###################
	void setKValue(float value);

	int pin;
	double ecValue;
	float kValue;

};

