#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double R;
    cin>>R;
    double pi = 3.14159;

    double volume = 4.0/3 * pi * R*R*R;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;

    return 0;
}