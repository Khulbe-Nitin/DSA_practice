#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >>n >>q;

    map <long long int, int> query;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        query[x]=i+1;
    }
    for(int i=0; i<q; i++){
        int x;
        cin >> x;
        map <long long int, int>::iterator it = query.find(x);
        if(it != query.end()){
            cout << it->second << "\n";
        }
        else{
            cout << -1 <<"\n";
        }
    }
    return 0;
}