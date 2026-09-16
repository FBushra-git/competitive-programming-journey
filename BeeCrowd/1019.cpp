#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int N;
    cin>>N;
    

    int hours = N/3600;
    N = N%3600;

    int min = N/60;
    int sec = N%60;
    cout<<hours<<":"<<min<<":"<<sec<<endl;

    return 0;
}