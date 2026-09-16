#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int age;
    cin>>age;

    int year = age/365;
    age = age % 365;

    int month = age/30;
    int days = age%30;

    cout<<year <<" ano(s)"<<endl<<month<<" mes(es)"<<endl<<days<<" dia(s)"<<endl;

    return 0;
}