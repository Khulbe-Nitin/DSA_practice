#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long int x; cin >> x;
    unordered_set <long long int> result;
    vector <long long int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        long long int ans = x - v[i];
        if(result.find(ans) != result.end()){
            auto it = find(v.begin(), v.end(),ans);
            int index = it - v.begin();
            cout << index+1 << " "<< i+1;
            return 0;
        }
        result.insert(v[i]); 
    }
    cout << -1;
    return 0;
}