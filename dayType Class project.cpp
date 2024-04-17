#include <iostream>
#include "dateType.h"

int main() {
	dateType date1;
	date1.printDate();

	dateType date2(12, 31, 2023);
	date2.printDate();

	date2.setDate(2, 29, 2024);
	date2.printDate();

	date2.setDate(2, 30, 2024);
	date2.printDate();

	date2.setDate(4, 30, 2021);
	date2.printDate();

	std::cout << "Days Passes since the beginning of the year: " << date2.daysPassed() << std::endl;
	std::cout << "Days remaining in the year: " << date2.daysRemaining() << std::endl;

	date2.setDateFuture(100);
	date2.printDate();

	return 0;
}
		