
#include <iostream>
#include<cstdlib>
#include  <ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int daysUntilExpiration = rand()%12;

    switch(daysUntilExpiration){
        case 0:
        cout << "Your subscription expires soon Renew now." << endl;
        break;

        case1:
        cout << "Your subscription expires soon. \nRenew now and save 10%!" << endl;
        break;

        case2:
        cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
        break;

        case3:
        cout << "Your expiration has expired." << endl;
        break;

        default:
        cout << "You have an active subscription." << endl;
        break;


    }
    return 0;
}