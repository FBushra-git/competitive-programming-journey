#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
   int code1, units1;
   float price1;
   
   cin>>code1>>units1>>price1;
   
   int code2,units2;
   float price2;
   cin>>code2>>units2>>price2;
   
   double to_pay = price1*units1 + price2*units2 ;
   
   cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<to_pay<<endl;
   
 
    return 0;
}