#include <bits/stdc++.h>
using namespace std;

class Solution{
public: 
    int sumArr(int n){
        int arr[n];
        int sum=0;
        for(int i=0; i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << sum;
        return sum;
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.sumArr(n);
    return 0;
}
