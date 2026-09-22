#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n, cin >>q;
    vector <long long int> prefix(n+1,0);
    for(int i=1; i<=n; i++){
        long long int x;
        cin >> x;
        int pow = 2;
        long long int result =1;
        while(pow--){
            result *= x;
        }
        prefix[i] = prefix[i-1] + result;
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << prefix[r]- prefix[l-1] << "\n";
    }
    return 0;
}