#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    set <long long int> combine;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        combine.insert(x);
    }
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        combine.insert(x);
    }
    if(combine.size()>0){
        cout << combine.size() << "\n";
        for(long long int N: combine){
            cout << N << " ";
        }
    }
    else{
        cout << 0 << "\n";
    }
}