#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x; cin >> n >>x;
    vector <long long int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    unordered_set <long long>check;
    for(int i=0; i<n; i++){
        long long ans = x-v[i];
        if(check.find(ans)!= check.end()){
            cout << "TRUE";
            return 0;
        }
        check.insert(v[i]);
    }
    cout << "FALSE";
    return 0;
}
