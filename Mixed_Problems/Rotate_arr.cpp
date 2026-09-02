#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int &N: v){
            cin>> N;
        }
        int D; cin>> D;
        vector<int> temp;
        temp.insert(temp.begin(),v.begin(),v.begin()+D);
        v.erase(v.begin(),v.begin()+D);
        v.insert(v.end(),temp.begin(),temp.end());
        for(int N: v){
            cout << N<<" ";
        }
        cout << endl;
    }
    return 0;
}