#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int target; cin >> target;
    int l = 0, r = n-1;
    bool found = false;
    while(l<=r){
        int m = (l+r)/2;
        if(v[m] == target){
            found = true;
            break;
        }
        else if (v[m] < target){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    if(found){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}
