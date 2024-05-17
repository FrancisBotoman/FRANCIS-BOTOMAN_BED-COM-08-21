#include <iostream> //For input and output stream
#include <limits> //For numeric limits
#include <sstream> //For stringstream
using namespace std;
int main(){
    int userInput; 
    cout << "Enter an integer value between 5 and 10: "; //prompt user to enter integer value between 5 and 10
    
    while(true){
        string input;
        getline(cin, input);
        stringstream ss(input);
        cout << "Enter an integer value between 5 and 10" << endl;
        if(ss >> userInput){
        if(userInput >= 5 && userInput <= 10){ //check if input is within the range
            cout << "Your input("<< userInput<<") has been accepted." << endl;
            break;
        }else{
            cout << "You entered "<< userInput <<." Please enter a number between 5 and 10." << endl;
        }
        }else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>max(), '\n');
            cout << "Sorry, you have entered an invalid number, please try again" << endl;
        }
    }
    return 0;
}