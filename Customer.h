#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class customer :public Person {
private:
	int MechanicID;
	Appointment a;
public:
	customer();
	void setmechanicid(int n);
	void setappointment(int h, int m);
	int getmechanicid();
	Appointment getappointment();
	bool operator<(customer& b);
	bool operator>(customer& b);
	bool operator==(customer& b);
	void print();
};
