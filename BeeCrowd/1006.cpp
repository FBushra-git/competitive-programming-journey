#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  double A,B,C;
  
  cin>>A>>B>>C;
  
  double average = (A*2+B*3+C*5)/10;
  
  cout<<fixed<<setprecision(1)<<"MEDIA = "<<average<<endl;
   
    return 0;
}