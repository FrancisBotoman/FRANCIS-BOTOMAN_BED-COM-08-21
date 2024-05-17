#include <iostream>
#include <csdtlib> //for random number and seed random number
#include <ctime> //for time
using namespace std;

int main() 
{
    srand(time(0)); //seed the random number generator
    int daysUntilExpiration = rand() % 12; //generates random number between 0 and 11

    if(daysUntilExpiration <= 0){
        cout<< "Your expiration has expired."<<endl;
    }else if (daysUntilExpiration <= 1){
        cout<< "Your subscription expires within a day."<<endl;
        cout<< "Renew now and save 20%!"<<endl;
    }else if (daysUntilExpiration <= 5){
        cout<< "Your subscription expires in"<<daysUntilExpiration<<"days."<<endl;
        cout<< "Renew now and save 10%!"<<endl;
    }else if (daysUntilExpiration <= 10){
        cout<< "Your subscription will expire soon. Renew now!"<<endl;
    }else{
        cout<< "You have an active subscription."<< endl;
    }
    {
        /* code */
    }
    
    {
        /* code */
    }
    return 0;
}

