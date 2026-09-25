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
        long long int subarr_sum =0;
        for(int j=i; j<n; j++){
            subarr_sum += v[j];
            sum += subarr_sum;
        }
    }
    cout << sum;
    return 0;
}