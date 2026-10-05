#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> prefix(n);

    prefix[0] = a[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + a[i];
    }

    int q;
    cin >> q;

    while(q--){
        int l, r;
        cin >> l >> r;

        if(l == 1)
            cout << prefix[r-1] << endl;
        else
            cout << prefix[r-1] - prefix[l-2] << endl;
    }
}