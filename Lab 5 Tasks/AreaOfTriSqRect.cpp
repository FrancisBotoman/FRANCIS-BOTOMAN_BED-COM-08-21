#include <iostream>
using namespace std;
//Function prototypes
void calculateAreaOfSquare();
void calculateAreaOfRectangle();
void calculateAreaOfTriangle();
int main(){
    int choice;

    do{
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit the program" << endl;
        cout << "Enter the selection: " << endl;
        cin >> choice;

        switch (choice){
            case1:
            calculateAreaOfSquare();
            break;

            case2:
            calculateAreaOfRectangle();
            break;

            case3:
            calculateAreaOfTriangle();
            break;

            case4:
            cout << "Exiting program." << endl;
            return 0;
            default:
            cout << "Your input was: " " which is an invalid input. Please enter the valid input!!!." << endl;
            break;
        }
    }while(true);
    return 0;
}
void calculateAreaOfSquare(){
    double side;
    cout << "Enter the length of the side of the Sqaure: ";
    cin >> side;
    cout << "Area of the Square is: " << side * side << endl;
}
void calculateAreaOfRectangle(){
    double length, width;
    cout << "Enter the length of the Rectangle: ";
    cin >> length;
    cout << "Enter the width of the Rectangle: ";
    cin >> width;
    cout << "Area of the Rectangle is: " << length * width << endl;
}
void calculateAreaOfTriangle(){
    double base, height;
    cout << "Enter the base of the Triangle: ";
    cin >> base;
    cout << "Enter the height of the Triangle: ";
    cin >> height;
    cout << "Area of Triangle is: " << 0.5 * base * height << endl;
}