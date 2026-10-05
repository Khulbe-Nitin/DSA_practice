#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int binomial(int n){
        int num = 1;
        if (n<0){
            return 0;
        }
        else{
        for(int i=1;i<=n;i++){
            num *= i;
        }
    }
        return num;
    }
};

int main(){
    int n,r;
    cin >> n >> r;
    Solution obj;
    int n_fact = obj.binomial(n);
    int r_fact = obj.binomial(r);
    int nr_fact = obj.binomial(n-r);
    if (n<r){
        cout << 0;
    }
    else{
        cout << n_fact/ (r_fact*nr_fact);
    }
    return 0;
}