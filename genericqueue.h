#pragma once
#include <iostream>
#include "Customer.h"
using namespace std;

template <class T>
class genericqueue {
private:
	T arr[100];
	int front;
	int current;
	int size;
public:
	genericqueue();
	void push(T a);
	void pop();
	T front_member();
};
template <class T>
genericqueue<T>::genericqueue() {
	front = 0;
	current = 0;
	size = 0;
}
template <class T>
void genericqueue<T>::push(T a) {
	arr[current] = a;
	current = current + 1;
	size = size + 1;
}
template <class T>
void genericqueue<T>::pop() {
	front = front + 1;
	size = size - 1;
}
template <class T>
T genericqueue<T>::front_member() {
	return arr[front];
}