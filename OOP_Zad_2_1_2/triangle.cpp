#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(int a, int b, int c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

int Triangle::perimeter() {
	return a + b + c;
}

float Triangle::area() {
	float p = perimeter() / 2.0;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::getPerimeter() {
	cout << "P = " << perimeter() << endl;
}

void Triangle::getArea() {
	cout << "S = " << round(area() * 10) / 10;
}