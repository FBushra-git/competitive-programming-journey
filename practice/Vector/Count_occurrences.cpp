#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int x ;
        cin >> x;
        v.push_back(x);
    }
    int target;
    cin >> target;

    for (int x : v){
        if(x == target){
           count ++;
        }
    }
    cout<< count;
}