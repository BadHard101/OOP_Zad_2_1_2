#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "triangle.h"
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	Triangle t1(a, b, c);
	t1.getPerimeter();
	t1.getArea();
	return(0);
}
