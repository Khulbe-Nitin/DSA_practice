#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    vector <vector<int>> v(n, vector<int>(n));
    vector <vector<int>> result(n, vector<int>(n));
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> v[i][j];
        }
    }
    for(int i =0; i<n;i++){
        int x =n-1, y =i;
        for(int j =0; j<n;j++){
            result[i][j]= v[x][y];
            x--;
        }
    }
    for(int i =0; i<n; i++){
        for(int j =0;j<n; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}