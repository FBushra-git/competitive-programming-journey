#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main(){

   double A, B, C;
   cin>> A>> B>> C;
    
   double delta = pow(B,2) - 4*A*C; 
   double R1 = (-B + sqrt(delta))/(2 * A);
   double R2 = (-B - sqrt(delta))/(2 * A);
   


   if(A == 0 || delta < 0){
   cout<<"Impossivel calcular"<<endl;
   }
   else{
     cout<<fixed<<setprecision(5)<<"R1 = "<<R1 <<endl;
   cout<<fixed<<setprecision(5)<<"R2 = "<<R2 <<endl;
   }


    
    return 0;
}
