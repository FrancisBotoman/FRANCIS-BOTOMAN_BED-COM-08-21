#ifndef SHAPES_H//local header
#define SHAPES_H

namespace shapes {
    class Square {
    private:
        double sideLength;

    public:
        Square();
        Square(double length);//overloading the constructor
        ~Square();//destructor

        double getSideLength() const;
        void setSideLength(double length);
    };

    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);//triangle object constructor
        ~Triangle();//destructor

        double getBase() const;
        double getHeight() const;
        void setBase(double b);
        void setHeight(double h);
    };

    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);//overloading circleObject constructor
        ~Circle();//destructor

        double getRadius() const;
        void setRadius(double r);
    };
}

#endif 


namespace shapes {//name of the namespace 'shapes'

    // for squareSquare
    Square::Square() : sideLength(0) {}

    Square::Square(double length) : sideLength(length) {}

    Square::~Square() {}

    double Square::getSideLength() const {
        return sideLength;
    }

    void Square::setSideLength(double length) {
        sideLength = length;
    }

    // for triangleTriangle
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    void Triangle::setBase(double b) {
        base = b;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }

    //for circleCircle
    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    double Circle::getRadius() const {
        return radius;
    }

    void Circle::setRadius(double r) {
        radius = r;
    }
}

#ifndef AREA_H//header for classArea
#define AREA_H


class Area {
public:
    static double calculateSquareArea(const shapes::Square& square);
    static double calculateTriangleArea(const shapes::Triangle& triangle);
    static double calculateCircleArea(const shapes::Circle& circle);
};

#endif // AREA_H


#include <cmath>

double Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateCircleArea(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}

#include <iostream>


using namespace std;
using namespace shapes;

int main() {//the main function
    char choice;
    do {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        switch(choice) {
            case '1': {
                double length;
                cout << "Enter the side length of the square: ";
                cin >> length;
                Square square(length);
                cout << "Area of square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while(choice != '4');

    return 0;
}

