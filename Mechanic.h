#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class mechanic :public Person {
private:
	int counter;
	Appointment am[24];
public:
	mechanic();
	void setcounter();
	void setapp(int h, int m);
	Appointment* getappointment();
	int getcounter();
	bool isAvailable(int h);
	void print();
};
