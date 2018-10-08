#include "Rectangle.h"

int Rectangle::area(){
	return width * height;
}

int Rectangle::getHeight(){
	return height;
}

int Rectangle::getWidth(){
	return width;
}

void Rectangle::setHeight(int h){
	height = h;
}

void Rectangle::setWidth(int w){
	width = w;
}

Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}
