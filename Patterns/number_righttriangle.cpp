#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern3(int n) {
        for (int i=0; i<n; i++){
            for (int j=1; j<=i+1;j++){
                cout << j;
            }
            cout << endl;
        }
    }
};
int main(){
    int a;
    cin >> a;
    Solution ob;
    ob.pattern3(a);
    return 0;
}