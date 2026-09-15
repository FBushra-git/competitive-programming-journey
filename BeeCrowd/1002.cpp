#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

 
int main() {
 
    double R;
    cin>> R ;
    
    double π = 3.14159 ;
    
    double A = π * R*R;
    
    cout << fixed << setprecision(4) << "A=" << A << endl;
    
    return 0;
}