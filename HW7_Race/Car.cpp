#include "Car.h"

Car::Car() : _minSpeed(50), _maxSpeed(150) {}

int Car::getMinSpeed() const
{
	return _minSpeed;
}

int Car::getMaxSpeed() const
{
	return _maxSpeed;
}

double Car::transitTime(std::string& track) {
	double _averageSpeed = 0.0;
	for (size_t i = 0; i < track.size(); i++) {
		if (track[i] == 'c') {
			_averageSpeed += 1.0*_maxSpeed / track.size();
		}
		else {
			_averageSpeed += 1.0*_minSpeed / track.size();
		}
	}	
	return 1000.0* track.size() / _averageSpeed;
}