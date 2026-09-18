#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    vector <long long int> v(n);
    for(auto &N: v){
        cin >> N;
    }
    vector <long long int> prefix(n+1,0);
    long long int sum =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum += v[i-1];
            prefix[i] = sum;
        }
        else{
            prefix[i] = prefix[i-1]+ 0;
        }
    }
    int q; cin >>q;
    while(q--){
        int l,r; cin >> l>> r;
        if(l==1){
            cout << prefix[r]<< endl;
        }
        else{
            cout << prefix[r]-prefix[l-1] << endl;
        }
    }
    return 0;
}