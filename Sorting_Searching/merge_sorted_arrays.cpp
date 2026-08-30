#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n>> m;
    vector<int> a(n) , b(m), c;
    for(int &N: a){
        cin >> N;
    }
     for(int &N: b){
        cin >> N;
    }
    int first =0 , second =0;
    while(first<n or second<m){
        if (first<n && a[first]<b[second] ){
            c.push_back(a[first]);
            first++;
        }
        else if( second<m &&a[first]>b[second]){
            c.push_back(b[second]);
                second++;
        }
        else if (first >= n){
            c.push_back(b[second]);
            second++;
        }
        else if(second>=m){
            c.push_back(a[first]);
            first++;
        }
    }
    for(auto N:c){
        cout << N<< " ";
    }
    return 0;
}