#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> v(n),final;
        for(int &N:v){
            cin >> N;
        }
        int zeroes=0;
        for(int i=0; i<n;i++){
            if(v[i]==0){
                zeroes++;
            }
            else{
                final.push_back(v[i]);
            }
        }
        for(int i=0;i<zeroes; i++){
            final.push_back(0);
        }
        for(int N:final){
            cout << N<< " ";
        }
        cout << endl;
    }
    return 0;
}