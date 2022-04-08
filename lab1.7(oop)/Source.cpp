#include <iostream>
#include <string>
#include "Time.h"
#include "Bill.h"

using namespace std;

int main()
{
	Time time,dif;
	time.init(3775);
	time.display();
	dif.init(time);
	cout << dif.difSec(time) << endl;
	
	return 0;
}