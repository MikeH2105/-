#pragma once
#include <iostream>;
typedef unsigned int ui;
class Time
{
private:
	ui hours;
	ui minutes;
	ui secunds;
public:
	Time(void);
	friend std::istream& operator>>(std::istream& in, Time& t);
	friend std::ostream& operator<<(std::ostream&, Time& t);
	Time& operator--();
	Time& operator++();
	Time& operator--(int value); 
	Time& operator++(int value);
	Time& operator-=(const Time& other);
	Time& operator+=(const Time& other);
	~Time(void);
};