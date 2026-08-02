#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern22(int n) {
        int space = (2 *n) -3;
        int space2 = 1;
        for (int i =1; i<=(2*n)-1;i++){
            if(i<n){
                for (int j=n;j>=n-i+1;j--){
                    cout << j << " ";
                }
                for (int j=0; j<space;j++){
                    cout<< n-i+1<< " ";
                }
                for(int j=n-i+1;j<=n;j++){
                    cout << j << " ";
                }
                space -= 2;
            }
            else if(i==n){
                for (int j=n;j>=n-i+1;j--){
                    cout << j << " ";
                }
                for (int j=n-i+2; j<=n;j++){
                    cout <<j << " ";
                }
            }
            else {
                for (int j=n;j>=i-n+1;j--){
                    cout << j << " ";
                }
                for (int j=0; j<space2; j++){
                    cout <<i-n+1 << " ";
                }
                for (int j=i-n+1;j<=n;j++){
                    cout << j << " ";
                }
                space2 += 2;
            }
            cout << endl;
        }
    }
};
int main (){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern22(n);
    return 0;
}