#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int time,speed;
    cin>>time>>speed;

    int distance = time*speed;

    double liters = distance/12.0;
    cout <<fixed<<setprecision(3)<<liters<<endl;

    return 0;
}