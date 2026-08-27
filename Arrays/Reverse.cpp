#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector <int> reverse_arr(int n){
        vector <int> v(n);
        for (int i=0; i<n;i++){
            cin >> v[i];
        }
        for (auto it= v.rbegin(); it!= v.rend(); it++){
            cout << *it << " ";
        }
        return v;
    }
};

int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.reverse_arr(n);
    return 0;
}