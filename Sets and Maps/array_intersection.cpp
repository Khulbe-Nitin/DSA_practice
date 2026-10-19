#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <long long int> count;
    for(int i=0; i<n; i++){
        long long int x; cin >> x;
        count.insert(x);
    }
    int m; cin >> m;
    set<long long int> intersection;
    for(int i=0; i<m; i++){
        int x; cin >> x;
        if(count.find(x)!= count.end()){
            intersection.insert(x);
        }
    }
    if(intersection.size() !=0){
        cout << intersection.size() << "\n";
        for(auto N: intersection){
            cout << N << " ";
        }
    }
    else{
        cout << 0;
    }
    return 0;
}