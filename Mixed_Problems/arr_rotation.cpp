#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v(n);
        for(int &N:v){
            cin >> N;
        }
        int min = INT_MAX;
        int pos=0; //position
        for(int i=0;i<n;i++){
            if(v[i]<min){
                min = v[i];
                pos =i;
            }
        }
        cout << pos << endl;
    }
    return 0;
}