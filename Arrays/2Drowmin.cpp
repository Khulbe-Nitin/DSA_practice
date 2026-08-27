#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    for(int i=0; i<n;i++){
        int min = INT_MAX;
        for(int j=0; j<m; j++){
            int x;
            cin >> x;
            if(min >x){
                min = x;
            }
        }
        cout << min << " ";
    }
    return 0;
}