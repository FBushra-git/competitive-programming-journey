#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n , k ;
    vector<int> v;
    cin >> n >> k;
    


    for (int i = 0; i < n; i++){
        int  x;
        cin >> x;
       v.push_back(x);
    }

    
    int count = 0;
    for (int i = 0 ; i < n; i++){
    
    if ( v[i] >= v[k-1] && v[i]){
      count ++;
    }
    }
     cout << count;


}