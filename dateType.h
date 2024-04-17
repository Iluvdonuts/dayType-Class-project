#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
public:

	dateType(int month = 1, int day = 1, int year = 1900);

	bool isLeapYear(int year) const;
	int daysInMonth(int month, int year) const;
	void setDate(int month, int day, int year);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void printDate() const;
	int daysPassed() const;
	int daysRemaining() const;
	void setDateFuture(int days);

private:
	int month;
	int day;
	int year;
};

#endif // DATETYPE_H