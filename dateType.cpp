#include "dateType.h"
#include <iostream>

dateType::dateType(int month, int day, int year) {
	setDate(month, day, year);
}

bool dateType::isLeapYear(int year) const {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dateType::daysInMonth(int month, int year) const {
	if (month == 2) {
		return isLeapYear(year) ? 29 : 28;
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	} else {
		return 31;
	}
}

void dateType::setDate(int month, int day, int year) {
	if (month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year) || year < 1900) {
		std::cerr << "Invalid date. setting to default date (1/1/1900)." << std::endl;
		this->month = 1;
		this->day = 1;
		this->year = 1900;
	} else {
		this->month = month;
		this->day = day;
		this->year = year;

	}
}

int dateType::getMonth() const {
	return month;
}

int dateType::getDay() const {
	return day;
}

int dateType::getYear() const {
	return year;
}

void dateType::printDate() const {
	std::cout << month << "-" << day << "-" << year << std::endl;
}

int dateType::daysPassed() const {
	int daysPassed = day;
	for (int i = 1; i < month; ++i) {
		daysPassed += daysInMonth(i, year);
	}
	return daysPassed;
}

int dateType::daysRemaining() const {
	return 365 - daysPassed();
}

void dateType::setDateFuture(int days) {
	int totalDays = daysPassed() + days;
	while (totalDays > 365) {
		if (isLeapYear(year)) {
			totalDays -= 366;
		} else {
			totalDays -= 365;
		}
		year++;
	}
	month = 1;
	while (totalDays > daysInMonth(month, year)) {
		totalDays > daysInMonth(month, year);
		month++;
	}
	day = totalDays;
}