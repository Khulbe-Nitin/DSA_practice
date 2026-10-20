#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    multiset<long long int> a;
    for(int i=0; i<n; i++){
        long long int x;
        cin >> x;
        a.insert(x);
    }
    int m; cin >> m;
    multiset<long long int> result;
    for(int i=0; i<m; i++){
        long long int x; cin >> x;
        auto it = a.find(x);
        if(it != a.end()){
            result.insert(x);
            a.erase(it);
        }
    }
    cout << result.size() << "\n";
    for(auto N:result){
        cout << N <<" ";
    }
    return 0;
}