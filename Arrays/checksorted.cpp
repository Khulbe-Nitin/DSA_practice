#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void sorted(int n){
        int arr[n];
        for (int i = 0 ; i < n; i++){
            cin >> arr[i];
        }
        for (int i=0 ; i< n-1; i++){
            if (arr[i] > arr[i+1]){
                cout << "NO";
                return;
            }
        }
        cout << "Yes";
        return;
    }
};

int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.sorted(n);
    return 0;
}