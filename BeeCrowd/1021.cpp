#include <iostream>
using namespace std;

int main() {
    double N;
    cin >> N;

    int amount = N * 100 + 0.5;

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;

    for (int note : notes) {
        cout << amount / note << " nota(s) de R$ "
             << note / 100 << ".00" << endl;
        amount %= note;
    }

    cout << "MOEDAS:" << endl;

    for (int coin : coins) {
        cout << amount / coin << " moeda(s) de R$ ";

        if (coin == 100)
            cout << "1.00";
        else if (coin == 50)
            cout << "0.50";
        else if (coin == 25)
            cout << "0.25";
        else if (coin == 10)
            cout << "0.10";
        else if (coin == 5)
            cout << "0.05";
        else
            cout << "0.01";

        cout << endl;
        amount %= coin;
    }

    return 0;
}