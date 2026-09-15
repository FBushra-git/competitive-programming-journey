#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double A,B;
    cin>>A>>B;
    
    double average = (A*3.5+B*7.5)/11;
    
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<average<<endl;
    
 
 
 
    return 0;
}