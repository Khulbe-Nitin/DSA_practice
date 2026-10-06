#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int factor(int a){
        for(int i=1; i<=a;i++){
            if(a%i==0){
                cout << i <<" ";
            }
        }
        return 0;
    }
};
int main(){
    int n; cin >> n;
    Solution obj;
    obj.factor(n);
    return 0;
}