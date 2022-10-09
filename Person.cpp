#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "";
	ID = " ";
	age = 0;
}
void Person::setname(string n) {
	name = n;
}
void Person::setid(string i) {
	ID = i;
}
void Person::setage(int a) {
	age = a;
}
string Person::getname() {
	return name;
}
string Person::getid() {
	return ID;
}
int Person::getage() {
	return age;
}
