#pragma once
#include <iostream>
#include <string>

using namespace std;
class Time
{
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;
public:
	unsigned int getHour() const { return hour; };
	unsigned int getMinute() const { return minute; };
	unsigned int getSecond() const { return second; };
	void setHour(unsigned int value) { hour = value; }
	void setMinute(unsigned int value) { minute = value; }
	void setSecond(unsigned int value) { second = value; }
	
	bool init(unsigned int h, unsigned int m, unsigned int s);
	void init(string str);
	void init(int sec);
	void init(Time time);
	
	void read();
	void display()const;
	
	int toSec();
	int toMin();

	friend int Total(Time time1, Time time2);
    void Sum(int sec);
	void Dif(int sec);
	bool isGreater(Time time1, Time time2);
	bool isLower(Time time1, Time time2);
	bool Equal(Time time1, Time time2);
	
};

