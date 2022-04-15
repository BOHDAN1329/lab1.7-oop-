#pragma once
#include <iostream>
#include <string>
#include "Time.h"
#include <sstream>
using namespace std;

class Bill
{
private:
	string last_name;
	string phone_number;
	double taruf;
	int discount;
	Time start;
	Time finish;
	double sum;
public:
	string getLast_name() const { return last_name; };
	string getPhone_number() const { return phone_number; };
	double getTaruf() const { return taruf; };
	int getDiscount() const { return discount; };
	Time getStart() const { return start; };
	Time getFinish() const { return finish; };

	void setLast_name(string value) { last_name = value; }
	void setPhone_number(string value) { phone_number = value; }
	void setTaruf(double value) { taruf = value; }
	void setDiscount(int value) { discount = value; }
	void setStart(Time value) { start = value; };
	void setFinish(Time value) { finish = value; };

	string toString();
	void setSum();
	void display();
	bool init(string last_name,string phone_number,double taruf,int discount,Time start,Time finish);
	void read();


};

