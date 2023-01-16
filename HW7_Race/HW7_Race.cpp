#include <iostream>
#include <string>
#include "Car.h"
#include "Motorbike.h"

double Race(Car& car, Motorbike& bike, std::string& track) {

	if (car.transitTime(track) < bike.transitTime(track)) {
		std::cout << "The CAR won with a time of ";
		return car.transitTime(track);		
	}
	else if (car.transitTime(track) == bike.transitTime(track)) {
		std::cout << "DRAW!!! Time: ";
		return car.transitTime(track);		
	}
	else {
		std::cout << "The BIKE won with a time of ";
		return bike.transitTime(track);		
	}
}

int main()
{
	std::string track1 = ("ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc");
	std::string track2 = ("bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb");
	Car car;
	Motorbike bike;
	std::cout << "Race on the track one!!!\n";
	std::cout << Race(car, bike, track1) << '!' << std::endl;
	std::cout << "===========================================================\n";
	std::cout << "Race on the track two!!!\n";
	std::cout << Race(car, bike, track2) << '!' << std::endl;
}

