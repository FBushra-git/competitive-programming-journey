#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){
    int X, Y;
    cin >> X >> Y;

    double price[] =  {0, 4.00, 4.50, 5.00, 2.00, 1.50 };
    
    
    double total = price[X]*Y;

    cout <<fixed << setprecision(2)<< "Total: R$ "<<total<<endl;

  
    return 0;
}
