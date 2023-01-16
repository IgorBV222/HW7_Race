#include "Motorbike.h"

Motorbike::Motorbike() : _minSpeed(60), _maxSpeed(170) {}

int Motorbike::getMinSpeed() const
{
	return _minSpeed;
}

int Motorbike::getMaxSpeed() const
{
	return _maxSpeed;
}

double Motorbike::transitTime(std::string& track) {
	double _averageSpeed = 0.0;
	for (size_t i = 0; i < track.size(); i++) {
		if (track[i] == 'b') {
			_averageSpeed += 1.0*_maxSpeed / track.size();
		}
		else {
			_averageSpeed += 1.0*_minSpeed / track.size();
		}
	}	
	return 1000.0 * track.size() / _averageSpeed;
}