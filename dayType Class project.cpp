#include <iostream>
#include "dayType.h"
#include "dayType.cpp"

int main() {
	std::cout << "1. Creating a day object using the default cunstructor:\n";
	dayType day1;
	std::cout << "  Current day:  ";
	day1.printDay();

	std::cout << "\n2. Displaying the previous day:\n";
	std::cout << "  Previous Day:  ";
	std::cout << day1.getPrevDay() << std::endl;

	std::cout << "\n3. Displaying the next day:\n";
	std::cout << "Next Day : ";
	std::cout << day1.getNextDay() << std::endl;

	std::cout << "\n4. Creating a day object using the constructor with parameters:\n";
	dayType day2("Monday");
	std::cout << "  Initialized day:  ";
	day2.printDay();

	std::cout << "\n5. Displaying the value of the instance variable using get function:\n";
	std::cout << "  Current Day:  ";
	std::cout << day2.getDay() << std::endl;

	std::cout << "\n6. Adding 3 days to the current day and displaying the new day value:\n";
	day2.addDays(3);
	std::cout << "  New day after adding 3 days:  ";
	day2.printDay();

	std::cout << "\n7. Adding 30 days to the current day and displaying the new day value:\n";
	day2.addDays(30);
	std::cout << "  New day after adding 30 days:  ";
	day2.printDay();

	std::cout << "\n8. Adding 365 days to the current day and displaying the new day value:\n";
	day2.addDays(365);
	std::cout << "  New day after adding 365 days:  ";
	day2.printDay();

	return 0;
}