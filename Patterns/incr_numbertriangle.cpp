#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern13(int n) {
        int temp =1;
        for (int i =0; i<n; i++){
            for (int j=0;j<=i;j++){
                cout << temp << " ";
                temp++;
            }
            cout << endl;
        }
    }
};
int main(){
    int n;
    cin >>n;
    Solution obj;
    obj.pattern13(n);
    return 0;
}