#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int target=-1,secondmax=0;
    for(int i =0; i<n; i++){
        int maxone=0;
        for(int j=0; j<m; j++){
            int x; cin >> x;
            if(x == 1){
                maxone++;
            }
            }
            if(maxone > secondmax){
            target = i;
            secondmax = maxone;
            }
     
    }
    cout << target;
    return 0;
}