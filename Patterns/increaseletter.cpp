#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void increaseletter(int n){
        for (int i =0; i<n;i++){
            for (char j = 'A' ; j <='A'+i; j++){
                cout << j;
            }
            cout << endl;
        }
    }
};
int main(){
    int n;
    cin >>n;
    Solution obj;
    obj.increaseletter(n);
    return 0;
}