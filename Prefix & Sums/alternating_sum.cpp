#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q; cin >>n >> q;
    vector <long long int> prefix(n+1,0);
    for(int i=1;i<=n;i++){
        long long int x; cin >>x;
        if(i%2==0){
            prefix[i] = prefix[i-1] - x;
        }
        else{
            prefix[i] = prefix[i-1]+ x;
        }
    }
    while(q--){
        int l,r; cin >> l>> r;
        long long int ans = prefix[r]-prefix[l-1];
        if(l%2==0){ ans = -ans;}
        cout << ans << "\n";
    }
    return 0;
}