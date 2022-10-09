#include <iostream>
#include "mechanic.h"
using namespace std;

mechanic::mechanic() {
	counter = 0;
	for (int i = 0; i < 24; i++) {
		am[i].hours = -10;
		am[i].minutes = -10;
	}
}
void mechanic::setcounter() {
	counter = counter + 1;
}
void mechanic::setapp(int h, int m) {
	am[h].hours = h;
	am[h].minutes = m;
}
int mechanic::getcounter() {
	return counter;
}
Person::Appointment* mechanic::getappointment() {
	return am;
}
bool mechanic::isAvailable(int h) {
	if (am[h].hours == -10) {
		return true;
	}
	else return false;
}
void mechanic::print() {
	cout << "Now printing the mechanic's info..." << endl;
	cout << "The mechanic's name is: " << name << endl;
	cout << "The mechanic's ID is: " << ID << endl;
	cout << "The mechanic's age is: " << age << endl;
}