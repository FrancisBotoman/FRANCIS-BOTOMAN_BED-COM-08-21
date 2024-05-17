#include <iostream>
using namespace std;
int main(){
    int* dynamicInt = new int;
    string* dyanmicString = new string;
    //prompt the user to input values
    cout << "Enter an integer value: ";
    cin >> *dynamicInt;

    cout << "Enter a string value: ";
    cin.ignore();
    getline(cin, *dyanmicString); 
//output the values
    cout << "The value of the dynamically allocated integer is: " << *dynamicInt << endl;

    cout << "The value of dynamically allocated string is: " << *dyanmicString << endl;
return 0;
}