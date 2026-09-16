#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double A,B,C;
    cin>>A>>B>>C;
    double pi = 3.14159;
    double triangle = 0.5 * A * C;
    double circle = pi * C * C;
    double trapezium = 0.5 * (A + B) * C;
    double square = B * B ;
    double rectangle = A * B;


    cout << fixed << setprecision(3) << "TRIANGULO: "<<triangle <<endl<<"CIRCULO: "<<circle<<endl<<"TRAPEZIO: "<<trapezium<<endl<<"QUADRADO: "<<square<<endl<<"RETANGULO: "<<rectangle<<endl;




    return 0;
}