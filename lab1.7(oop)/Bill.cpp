#include "Bill.h"
#include <string>
#include <iostream>

string Bill::toString()
{
	stringstream sout;
	setSum();
	sout << "To pay: " << sum << endl;
	return sout.str();
}

void Bill::setSum()
{
	int minute = Total(start, finish) / 60;
	taruf = taruf * (1.0 * (100 - discount) / 100);
	sum = minute * taruf;
}

void Bill::display()
{
	cout << toString() << endl;
}

bool Bill::init(string last_name, string phone_number, double taruf, int discount, Time start, Time finish)
{
	start.init(start);
	finish.init(finish);
	this->last_name = last_name;
	this->phone_number = phone_number;
	this->taruf = taruf;
	this->discount = discount;
	return true;
}

void Bill::read()
{
	cout << "Start time :" << endl;
	start.read();
	cout << "Finish time :" << endl;
	finish.read();
	cout << "Enter last name :";
	cin >> last_name;
	cout << "Enter phone number :";
	cin >> phone_number;
	cout << "Enter taruf :";
	cin >> taruf;
	cout << "Enter discount :";
	cin >> discount;
}




