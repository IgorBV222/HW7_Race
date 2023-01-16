#pragma once
#include <iostream>
#include <string>


class Car
{
public:
	Car();
	int getMinSpeed()const;
	int getMaxSpeed()const;
	double transitTime(std::string& track);

private:
	int _minSpeed; 
	int _maxSpeed; 
};

