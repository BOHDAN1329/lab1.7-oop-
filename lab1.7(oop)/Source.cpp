#include <iostream>
#include <string>
#include "Time.h"
#include "Bill.h"

using namespace std;

int main()
{
	Bill a;
	Time b[2];
	cout << "Create first element" << endl;
	b[0].read();
	b[0].display();
	cout << "Create second element" << endl;
	b[1].read();
	b[1].display();
	bool Greater = isGreater(b[0], b[1]);
	if (Greater == true)
		cout << "b[0] is greater than b[1]" << endl;
	else
		cout << "b[0] is less than b[1]" << endl;
	cout << "Create Bill" << endl;
	a.read();
	a.display();
	

	return 0;
}