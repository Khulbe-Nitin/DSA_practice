#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <long long int> combine; //To store union of both arrays
    multiset <long long int> sum; // To store all elements of both arrays
    for(int i=0; i<n; i++){
        int x; cin >> x;
        combine.insert(x);
        sum.insert(x);
    }
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int x; cin >> x;
        combine.insert(x);
        sum.insert(x);
    }
    for(auto N:combine){
        auto it = sum.find(N);
        if(it != sum.end() ){
            sum.erase(it);
        }
    }
    if(sum.size()!=0){
        cout << sum.size()<<"\n";
        for(auto N: sum){
            cout << N << " ";
        }
    }
    else{
        cout << sum.size();
    }
    return 0;
}