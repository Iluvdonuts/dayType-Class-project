#include "dayType.h"
#include <iostream>

std::string dayType::validDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

dayType::dayType() {
	day = "Sunday";
}

dayType::dayType(std::string day) {
	setDay(day);
}

void dayType::setDay(std::string day) {
	for (int i = 0; i < 7; ++i) {
		if (day == validDays[i]) {
			this->day = day;
			return;

		}
	}
	std::cerr << "Invalid day name!\n";
}

void dayType::printDay() {
	std::cout << day << std::endl;
}

std::string dayType::getDay() {
	return day;
}

std::string dayType::getNextDay() {
	int index = 0;
	for (int i = 0; i < 7; ++i) {
		if (day == validDays[i]) {
			index = i;
			break;
		}


	}
	return validDays[(index + 1) % 7];
}

std::string dayType::getPrevDay() {
	int index = 0;
	for (int i = 0; i < 7; ++i) {
		if (day == validDays[i]) {
			index = i;
			break;
		}
	}
	return validDays[(index + 6) % 7];
}

void dayType::addDays(int numDays) {
	int index = 0;
	for (int i = 0; i < 7; ++i) {
		if (day == validDays[i]) {
			index = i;
			break;
		}
	}
	int newIndex = (index + numDays) % 7;
	if (newIndex < 0) newIndex += 7;
	day = validDays[newIndex];
}