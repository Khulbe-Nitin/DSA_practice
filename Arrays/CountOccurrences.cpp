#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int q; cin >> q;
    // declaring a vector 
    vector <int> v(n);
    for(auto &N : v){
        cin >> N;
    }
    int count =0;
    for(int i=0; i<n; i++){
        if (v[i]==q){
            count++;
        }
    }
    cout << count;
    return 0;
}