#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
         v.push_back(x);
        sum = sum + x;
    }
    cout << sum;

}