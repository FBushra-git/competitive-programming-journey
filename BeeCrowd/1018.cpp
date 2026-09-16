#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int N;
    cin>>N;

    cout<<N<<endl;


    int hundred = N/100;
    cout<< hundred <<" nota(s) de R$ 100,00"<<endl;
    N = N%100;

    int fifty = N/50;
    cout<< fifty <<" nota(s) de R$ 50,00"<<endl;
    N = N % 50;

    int twenty = N/20;
    cout<< twenty <<" nota(s) de R$ 20,00"<<endl;
    N =  N%20;

    int ten = N/10;
    cout<< ten <<" nota(s) de R$ 10,00"<<endl;
    N = N%10;

    int five = N/5;
    cout<< five <<" nota(s) de R$ 5,00"<<endl;
    N = N%5;

    int two = N/2;
    cout<< two <<" nota(s) de R$ 2,00"<<endl;
    N = N%2;

    int one = N / 1;
    cout<< one <<" nota(s) de R$ 1,00"<<endl;
    N = N % 1;


    return 0;
}




//Alternate way

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int note : notes) {
        cout << N / note << " nota(s) de R$ " << note << ",00" << endl;
        N %= note;
    }

    return 0;
}