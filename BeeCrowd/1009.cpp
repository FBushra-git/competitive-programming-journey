#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string name;
    double salary,total_value;
    cin>>name>>salary>>total_value;

    double total = salary + (total_value * 15 / 100);

    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
    


    return 0;
}