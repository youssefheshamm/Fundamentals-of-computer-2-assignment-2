#include <iostream>
#include "Customer.h"
#include "Person.h"
using namespace std;

customer::customer() {
	MechanicID = -10;
	a.hours = -10;
	a.minutes = -10;
}
void customer::setmechanicid(int id) {
	MechanicID = id;
}
void customer::setappointment(int h, int m) {
	a.hours = h;
	a.minutes = m;
}
int customer::getmechanicid() {
	return MechanicID;
}
Person::Appointment customer::getappointment() {
	return a;
}
bool customer::operator<(customer& b) {
	if (this->a.hours < b.a.hours) {
		return true;
	}
	else if (this->a.hours == b.a.hours) {
		if (this->a.minutes < b.a.minutes) {
			return true;
		}
		else { return false; }
	}
	else { return false; }
}
bool customer::operator>(customer& b) {
	if (this->a.hours > b.a.hours) {
		return true;
	}
	else if (this->a.hours == b.a.hours) {
		if (this->a.minutes > b.a.minutes) {
			return true;
		}
		else { return false; }
	}
	else { return false; }
}
bool customer::operator==(customer& b) {
	if ((this->a.hours == b.a.hours) && (this->a.minutes == b.a.minutes)) {
		return true;
	}
	else return false;
}
void customer::print() {
	cout << "Now printing the customers info..." << endl;
	cout << "The customer's name is: " << name << endl;
	cout << "The customer's ID is: " << ID << endl;
	cout << "The customer's age is: " << age << endl;
	cout << "The customer's assigned mechanic id is: " << MechanicID << endl;
	cout << "The customer's appointment is at: " << a.hours << ":" << a.minutes << endl;
}