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
	long getHour() const { return hour; };
	long getMinute() const { return minute; };
	long getSecond() const { return second; };
	void setHour(unsigned int value) { hour = value; }
	void setMinute(unsigned int value) { minute = value; }
	void setSecond(unsigned int value) { second = value; }
	
	void init(unsigned int h, unsigned int m, unsigned int s);
	void init(string str);
	void init(int sec);
	void init(Time time);
	
	string toString()const;
	void read();
	void display()const;
	
	int toSec();
	int toMin();

	int difSec(Time time1);
	void Sum(int sec);
	void Dif(int sec);
	bool isGreater(Time time1, Time time2);
	bool isLower(Time time1, Time time2);
	bool Equal(Time time1, Time time2);

};

