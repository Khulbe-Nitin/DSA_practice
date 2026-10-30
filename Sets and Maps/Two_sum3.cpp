#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    long long int x; cin >> x;
    vector <long long int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    map <long long , long long int> exist;
    long long int count =0;
    for(int i=0; i<n; i++){
        long long int ans = x - v[i];
        auto it = exist.find(ans);
        if(it != exist.end()){
            count += it->second;
        }
        exist[v[i]]++;
    }
    cout << count;

    return 0;
}