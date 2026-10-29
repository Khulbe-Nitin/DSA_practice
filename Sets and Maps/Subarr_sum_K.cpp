#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;

    set<long long> seen;
    seen.insert(0);          // empty prefix P[0] = 0
    long long prefix = 0;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        prefix += a;
        // Need an earlier prefix equal to prefix - x
        if(seen.count(prefix - x)){
            cout << "YES";
            return 0;
        }
        seen.insert(prefix);
    }
    cout << "NO";
    return 0;
}