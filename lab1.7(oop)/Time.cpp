#include "Time.h"

void Time::init(unsigned int h, unsigned int m, unsigned int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

string Time::toString() const
{

	return string();
}

void Time::read()
{
	unsigned int h, m, s;

	cout << "Hour = "; cin >> h;
	cout << "Minute = "; cin >> m;
	cout << "Second = "; cin >> s;
	init(h,m,s);
}

void Time::display() const
{
	cout << "Hour = " << hour << endl;
	cout << "Minute = " << minute << endl;
	cout << "Second = " << second << endl;
}

int Time::toSec()
{
	return this->hour * 3600 + this->minute * 60 + this->second;
}

int Time::toMin()
{
	return toSec() / 60;
}

 void Time::init(string str)
{
	hour = atoi(&str[0]);
	minute = atoi(&str[3]);
	second = atoi(&str[6]);
}

void Time::init(int sec)
{
	hour = (int)sec / 3600;
	sec -= hour * 3600;
	minute = (int)sec / 60;
	sec -= minute * 60;
	second = sec;
}

void Time::init(Time time)
{
	*this = time;
}


int Time::difSec(Time time1)
{
	return (this->hour * 3600 + this->minute * 60 + this->second) - (time1.hour * 3600 + time1.minute * 60 + time1.second);
}

void Time::Sum(int sec)
{
	this->hour += (int)sec / 3600;
	sec -= ((int)sec / 3600) * 3600;
	this->minute += (int)sec / 60;
	sec -= ((int)sec / 60) * 60;
	this->second += sec;
}

void Time::Dif(int sec)
{
	this->hour -= (int)sec / 3600;
	sec -= ((int)sec / 3600) * 3600;
	this->minute -= (int)sec / 60;
	sec -= ((int)sec / 60) * 60;
	this->second -= sec;
}

bool Time::isGreater(Time time1, Time time2)
{
	return((time1.hour * 3600 + time1.minute * 60 + time1.second) > (time2.hour * 3600 + time2.minute * 60 + time2.second));
}

bool Time::isLower(Time time1, Time time2)
{
	return((time1.hour * 3600 + time1.minute * 60 + time1.second) < (time2.hour * 3600 + time2.minute * 60 + time2.second));
}

bool Time::Equal(Time time1, Time time2)
{
	return((time1.hour * 3600 + time1.minute * 60 + time1.second) == (time2.hour * 3600 + time2.minute * 60 + time2.second));
}



