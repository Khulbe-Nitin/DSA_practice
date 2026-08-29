#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int x; cin >> x;
    bool found = false;
    for(int i=0; i<n; i++){
        if (v[i]==x){
            found = true;
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