#include "Board.h"
#include "Cell.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "Shape.h"
#include <assert.h>
#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Diamond.h"

using namespace std;


void TestPoint(Point A, Point B, Point C)
{
	assert(A!=B);
	assert(A==C);

}

void TestShape( vector<Shape *> shapes)
{
	assert(*shapes[0]==*shapes[1]);
	assert(*shapes[1]!=*shapes[2]);
}

void main()
{
	Point A(1,2);
	Point B(2,2);
	Point C=A;
	TestPoint(A,B,C);
 

	vector<Shape *> shapes;
	shapes.push_back(&Rectangle());
	shapes.push_back(&Rectangle());
	shapes.push_back(&Rectangle(WHITE));
	TestShape(shapes);

	cout << "Tests finished successfully!" << endl;
}
