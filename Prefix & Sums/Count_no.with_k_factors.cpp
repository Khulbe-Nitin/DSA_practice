#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,k; cin >>n, cin>>q, cin >>k;
    vector<int> prefix(n+1,0);
    
    for(int i=1; i<=n; i++){
        int x; 
        cin >> x;
        int count =0;
        for(int j=1; j<=sqrt(x); j++){
            if(x%j==0){
                int y = x/j;
                if(j!=y){count += 2;} else{count++;}
            }
        }
        if (count==k){
            prefix[i] = prefix[i-1] + 1;
        }
        else{
            prefix[i] = prefix[i-1];
        }
    }
    while(q--){
        int l,r; cin >>l, cin>>r;
        cout << prefix[r] - prefix[l-1] << "\n";
    }
    return 0;
}