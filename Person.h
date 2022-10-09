#pragma once
#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	string ID;
	int age;
public:
	Person();
	virtual void print() = 0;
	virtual void setname(string n);
	virtual void setid(string i);
	virtual void setage(int a);
	virtual string getname();
	virtual string getid();
	virtual int getage();
	struct Appointment {
		int hours;
		int minutes;
	};
};