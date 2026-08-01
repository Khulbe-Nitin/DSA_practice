#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void pattern8(int n) {
        int space = 0;
        for (int i=n-1;i>=0; i--){
            int temp = 1 + (i*2);
            for (int z =0; z<space; z++){
                cout << " ";
            }
            for (int j=temp;j>0;j--){
                cout << "*";
            }
            cout << endl;
            space ++;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern8(n);
    return 0;
}