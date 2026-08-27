#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int min(int n){
        int target=0, position=1;
        int arr[n];
        for (int i=0; i<n;i++){
            cin >> arr[i];
        }
        target = arr[0];
        for(int i=0; i<n;i++){
            if (target > arr[i]){
                target = arr[i];
                position = i+1;
            }
        }
        cout << target <<" "<< position;
        return target,position;
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.min(n);
    return 0;
}