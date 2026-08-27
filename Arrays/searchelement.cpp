#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void search(int n, int x){
        int arr[n];
        for(int i=0 ; i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            if (x == arr[i]){
                cout << "YES";
                return;
            }
        }
        cout << "NO";
        return;

    }
};
int main(){
    int n,x;
    cin >> n >> x;
    Solution obj;
    obj.search(n,x);
    return 0;
}