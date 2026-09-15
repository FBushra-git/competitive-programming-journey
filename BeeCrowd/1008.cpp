#include <stdio.h>
#include <iostream>
#include<iomanip>

using namespace std;
 
int main() {
 
   int number, work_hours;
   float amount_per_hour;
   cin>>number>> work_hours>> amount_per_hour;
   
   cout<<"NUMBER = "<<number<<endl;
   cout << "SALARY = U$ " << fixed << setprecision(2) << work_hours * amount_per_hour << endl;
 
    return 0;
}