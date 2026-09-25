#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector<long long int> v;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        v.push_back(x);
    }
    long long int sum=0;
    for(int i=0; i<n; i++){
        long long left = i+1;
        long long right = n-i;
        sum += v[i] * left * right;
    }
    cout << sum;
    return 0;
}