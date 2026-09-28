#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin >> n >>k;
    vector <long long int> v(n);
    for(auto &S: v){
        cin >> S;
    }
    long long int sum =0;
    long long int best = 0;
    for(int i=0; i<k; i++){
        sum += v[i];
    }
    best = sum;
    for(int i=k; i<n; i++){
        sum += v[i] - v[i-k];
        best = max(best,sum);
    }
    cout << best;
    return 0;
}