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
    map <pair<long long, long long> , int> exist;
    int count =0;
    for(int i=0; i<n; i++){
        long long int ans = x - v[i];
        if(result.find(ans) != result.end() && exist[{index+1,i+1}] == exist.end()){
            auto it = find(v.begin(), v.end(),ans);
            int index = it - v.begin();
            count++;
            exist[{index+1,i+1}]++;
        }
        result.insert(v[i]); 
    }
    cout << -1;
    return 0;
}