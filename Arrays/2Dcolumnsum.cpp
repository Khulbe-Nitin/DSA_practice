#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    int n, m; cin >> n >> m;
    vector <vector <int> > v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0; j<n;j++){
            sum += v[j][i];
        }
        cout << sum << ' ';
    }
    return 0;
}