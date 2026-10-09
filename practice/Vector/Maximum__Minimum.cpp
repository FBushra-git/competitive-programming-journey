#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x ;
        cin >> x;
        v.push_back(x);
        
    }   
 
      cout <<"Max element is : "<< *max_element(v.begin(),v.end()) << endl;  
      cout <<"Min element is : " << *min_element(v.begin(),v.end()); 
    

    
}