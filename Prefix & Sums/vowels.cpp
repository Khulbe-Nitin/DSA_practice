#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n; cin >>n;
    string s(n, '\0');
    vector <int> prefix(n+1, 0);
    cin >> s;
    for(int i=1; i<=n;i++){
        if(s[i-1]== 'a' or s[i-1]== 'e' or s[i-1]== 'i' or s[i-1]== 'o' or s[i-1]== 'u'){
            prefix[i] = prefix[i-1] +1;
        }
        else{
            prefix[i] = prefix[i-1];
        }
    }
    int q; cin >> q;
    for(int i=0; i<q;i++){
        int l, r; cin >> l >> r;
        cout << prefix[r]- prefix[l-1] << "\n";
    }
    return 0;

}