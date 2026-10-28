#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, x; cin >> n >> x;
    vector<long long int> v(n);
    for(auto &S: v){
        cin >> S;
    }

    for(int i=0; i<n;i++){
        long long int sum =0;
        for(int j=i; j<n; j++){
            sum += v[j];
            if(sum ==x){
                cout <<"YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}