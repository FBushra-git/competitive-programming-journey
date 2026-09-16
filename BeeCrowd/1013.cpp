#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;

    int MaiorAB = (a+b+abs(a-b))/2;
    int maior = (MaiorAB + c + abs(MaiorAB - c))/2;

    cout<<maior<<" eh o maior"<<endl;



    return 0;
}