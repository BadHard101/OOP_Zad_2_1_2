#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
	int a, b, c;
private:
	int perimeter();
	float area();
public:
	Triangle(int, int, int);
	void getPerimeter();
	void getArea();
};

#endif //TRIANGLE_H