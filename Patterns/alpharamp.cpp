#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern16(int n) {
        char z = 'A';
        for (int i = 0; i<n; i++){
            for (int j=0; j<=i;j++){
                cout<< z;
            }
            cout<< endl;
            z++;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern16(n);
    return 0;
}