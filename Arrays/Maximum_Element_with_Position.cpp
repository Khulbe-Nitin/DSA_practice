#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &N: v){
        cin >> N;
    }
    int max = INT_MIN;
    int j = 0;
    for(int i=0; i<n; i++){
        if (v[i] > max){
            max = v[i];
            j = i+1;
        }
    }
    cout << max << " " << j;
    return 0;
}