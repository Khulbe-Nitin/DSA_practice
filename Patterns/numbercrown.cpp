#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern12(int n) {
        int space = 2*(n-1);
        for (int i=0; i<n; i++){
            // forward printing
            for (int j=0; j<=i;j++){
                cout << j+1;
            }
            // space printing
            for (int j=0; j<space;j++){
                cout << " ";
            }
            // backward printing
            for (int j=i; j>=0; j--){
                cout <<j+1;
            }
            cout << endl;
            space -=2;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern12(n);
    return 0;
}