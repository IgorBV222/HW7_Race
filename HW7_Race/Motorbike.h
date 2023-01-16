#pragma once
#include <iostream>
#include <string>

class Motorbike
{
public:
	Motorbike();
	int getMinSpeed()const;
	int getMaxSpeed()const;	
	double transitTime(std::string& track);

private:
	int _minSpeed; 
	int _maxSpeed; 
};

