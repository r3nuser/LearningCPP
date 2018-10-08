#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(void){
	Rectangle* rect = new Rectangle(4, 5);

	cout << "Area: " << rect->area() << endl;
	cout << "Height: " << rect->getHeight() << endl;
	cout << "Width: " << rect->getWidth() << endl;

	rect->setWidth(20);
	rect->setHeight(40);

	cout << "Area: " << rect->area() << endl;
        cout << "Height: " << rect->getHeight() << endl;
        cout << "Width: " << rect->getWidth() << endl;

	delete rect;

	return 0;
}
