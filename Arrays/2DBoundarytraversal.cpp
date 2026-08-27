#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin>>n >>m;
    vector<vector<int>> v(n, vector<int> (m));
    for(int x=0; x<n; x++){
        for(int y=0 ; y<m; y++){
            cin >> v[x][y];
        }
    }
    int i=0,j=1;
    while(i>0 or j>0){
        if(n==1){
            for(int x=0; x<m; x++){
                cout << v[0][x] << ' ';
            }
            break;
        }
        else if(m==1){
            for(int x=0; x<n; x++){
                cout << v[x][0] << ' ';
            }
            break;
        }
        if(i==0 && j==1){
            while(j<m){
                cout << v[i][j-1] << " ";
                j++;
            }
            continue;
        }
        if(i==0 && j==m){
            while(i<n-1){
                cout << v[i][j-1] << ' ';
                i++;
            }
            continue;
        }
        if(i==n-1 && j==m){
            while(j>1){
                cout << v[i][j-1] << " ";
                j--;
            }
            continue;
        }
        if(i==n-1 && j==1){
            while(i>0){
                cout << v[i][j-1]<< " ";
                i--;
            }
            j--;
            continue;
        }
    }
    return 0;
}