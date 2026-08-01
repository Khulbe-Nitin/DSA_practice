#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern7(int n) {
        int space = n-1;
        for (int i=0;i<n; i++){
            int temp = 1 + (i*2);
            for (int z =0; z<space; z++){
                cout << " ";
            }
            for (int j=0;j<temp;j++){
                cout << "*";
            }
            cout << endl;
            space --;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern7(n);
    return 0;
}