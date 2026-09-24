#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n; cin >>n;
    vector <int> v(n);
    for(auto &N:v){
        cin >> N;
    }
    // int i=0; int j=i;
    // vector<vector<long long int>> prefix(n,vector<long long int>(n+1,0));
    // while(i<n){
    //     prefix[i][j+1] = prefix[i][j] + v[j];
    //     j++;
    //     if(j>n-1){
    //         i++;
    //         j=i;
    //     }
    // }
    for(int i=0; i<n; i++){
        long long sum = 0;
        for(int j=i; j<n;j++){
            // cout << prefix[i][j+1]<<"\n";
            sum += v[j];
            cout << sum <<"\n";
        }
    }
    return 0;
}
