#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    int n,m; cin >> n >> m;
    vector <vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m;j++){
                cout << v[i][j] << ' ';
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                cout << v[i][j]<< ' ';
            }
        }
    }
    return 0;
}