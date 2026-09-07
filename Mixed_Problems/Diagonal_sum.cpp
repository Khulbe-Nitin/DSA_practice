#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <vector<int>> v(n,vector<int>(n));
    for(int x=0; x<n; x++){
        for(int y=0;y<n; y++){
            cin >> v[x][y];
        }
    }
    int i=0, sum =0;
    while(i<n){
        sum += v[i][i];
        i++;
    }
    cout << sum;
    return 0;
}