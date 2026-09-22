#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,k; cin >> n>> q>> k;
    vector <int> prefix(n+1,0);
    for(int i=1; i<=n; i++){
        int x; 
        cin >> x;
        int sum =0;
        while(x>0){
            sum += x%10;
            x /=10;
        }
        prefix[i] = prefix[i-1];
        if (sum ==k){
            prefix[i]++;
        }
    }
    while(q--){
        int l, r; cin >> l >> r;
        cout << prefix[r]- prefix[l-1]<< "\n";
    }
    return 0;
}