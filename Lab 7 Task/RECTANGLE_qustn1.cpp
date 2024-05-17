#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();
    Rectangle(float l, float w);
    ~Rectangle();

    float getLength() const;
    float getWidth() const;
    void setLength(float l);
    void setWidth(float w);

    float calculateArea() const;
};

#endif // RECTANGLE_H



Rectangle::Rectangle() : length(0), width(0) {}

Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

Rectangle::~Rectangle() {}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::calculateArea() const {
    return length * width;
}

#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect1;
    rect1.setLength(length);
    rect1.setWidth(width);

    cout << "Area of rectangle 1 is: " << rect1.calculateArea() << endl;

    cout << "Enter the length of the second rectangle: ";
    cin >> length;

    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width);

    cout << "Area of rectangle 2 is: " << rect2.calculateArea() << endl;

    return 0;
}
