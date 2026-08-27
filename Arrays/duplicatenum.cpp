#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int x = 0;
        for (int i = 0 ; i< n; i++){
            int y;
            cin >> y;
            x ^= y;
        }
        for (int i =0 ; i <= n-2; i++){
            x ^= i;
        }
        cout << x << endl;
    }
    return 0;
}