#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
	std::string day;
	static std::string validDays[];

public:
	dayType();
	dayType(std::string day);
	void setDay(std::string day);
	void printDay();
	std::string getDay();
	std::string getNextDay();
	std::string getPrevDay();
    void addDays(int numDays);
};

#endif // DAYTYPE_H
