#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    int n,m,x; cin>> n>> m >> x;
    bool found = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m ; j++){
            int y;
            cin >> y;
            if(x==y){
                found=true;
                break;
            }
            }
            if(found){
                cout << "true";
                break;
            }
        }
        if(!found){
            cout<< "false";
        }
    return 0;
    }
