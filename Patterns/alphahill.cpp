#include <iostream>
using namespace std;

class Solution {
public:
    void pattern17(int n) {
        int space = n-1;
        for (int i= 0; i<n;i++){
            for (int j=space; j>0;j--){
                cout << " ";
            }
            for (char j='A'; j<='A'+i;j++){
                cout << j;
            }
            for (char j= 'A'+i-1;j>='A';j--){
                cout<< j;
            }
            cout << endl;
            space --;
        }
    }
};
int main(){
    int n;
    cin >>n;
    Solution obj;
    obj.pattern17(n);
    return 0;
}