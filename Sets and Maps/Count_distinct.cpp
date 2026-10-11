#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<long long int> v(n);

    for(auto &N:v){
        cin >> N;
    }
    set <long long int> distinct;
    for(int N : v){
        distinct.insert(N);
    }
    cout << distinct.size();
    return 0;
}