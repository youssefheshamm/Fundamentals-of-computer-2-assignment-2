#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
#include "genericqueue.h"
#include <iostream>
using namespace std;

void main() {
	cout << "How many customers would you like to enter?" << endl;
	int n;
	cin >> n;
	customer* c;
	c = new customer[n];
	cout << "Please fill the info of each customer" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Please enter the name of customer number: "<<i+1 << endl;
		string s;
		cin >> s;
		c[i].setname(s);
		cout << "Please enter the desired appointment: " << endl;
		int h, m;
		cout << "enter the hour: "; cin>>h;
		cout << "enter the minute: "; cin >> m;
		c[i].setappointment(h, m);
	}
	mechanic m[3];
	m[0].setname("Ayman");
	m[1].setname("Khaled");
	m[2].setname("Mai");
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (m[j].isAvailable(c[i].getappointment().hours)) {
			c[i].setmechanicid(j);
			m[j].setapp(c[i].getappointment().hours, c[i].getappointment().minutes);
			m[j].setcounter();
			
		}
		else {
			for (int z = 0; z < 3; z++) {
				if (m[z].isAvailable(c[i].getappointment().hours)) {
					c[i].setmechanicid(z);
					m[z].setapp(c[i].getappointment().hours, c[i].getappointment().minutes);
					m[z].setcounter();
					z = 3;
				}
		}
		
		}
		if (j == 2) {
			j = 0;
		}
		else j++;
	}
	cout << "-------------------------------------" << endl;
	genericqueue <customer> q;	
	for (int i = 0; i < n; i++) {
		cout << "Mr/s. " << c[i].getname() << " " ;
		if (c[i].getmechanicid() == -10) { cout << "unfortunately appointment is cancelled, no available mechanics " << endl; }
		else {
			cout << "Has an appointment with " << m[c[i].getmechanicid()].getname();
			cout << " at: " << c[i].getappointment().hours << ":" << c[i].getappointment().minutes << endl;
		}

	}
	cout << "-------------------------------------" << endl;
	customer t;
	for (int i = 0; i < n; i++) {
		for (int z = 0; z < n; z++) {
			if (c[z] > c[i]) {
				t = c[i];
				c[i] = c[z];
				c[z] = t;
			}
		}
	}
	cout << "After entering the queue " << endl;
	for (int i = 0; i < n; i++) {
		q.push(c[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << "Mr/s. " << q.front_member().getname() << " ";
		if (q.front_member().getmechanicid() == -10) { cout << "unfortunately appointment is cancelled, no available mechanics " << endl; }
		else {
			cout << "Has an appointment with " << m[q.front_member().getmechanicid()].getname() ;
			cout << " at: " << q.front_member().getappointment().hours << ":" << q.front_member().getappointment().minutes << endl;
		}
		q.pop();
	}
	cout << "-------------------------------------" << endl;
}