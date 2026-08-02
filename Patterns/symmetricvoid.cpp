#include <iostream>
using namespace std;

class Solution {
public:
    void pattern19(int n) {
        int star = n;
        int space =0;
        for (int i=1; i<=(2*n); i++){
            if(i<=n){
                for(int j=star; j>0;j--){
                    cout << "*";
                }
                for (int z=0;z<space;z++){
                    cout << " ";
                }
                for(int j=star; j>0;j--){
                    cout << "*";
                }
                space += 2;
                star --;
            }
            if(i>n) {
                for(int j=0; j<star+1;j++){
                    cout << "*";
                }
                for (int z=space-2;z>0;z--){
                    cout << " ";
                }
                for(int j=0; j<star+1;j++){
                    cout << "*";
                }
                space -= 2;
                star ++;
            }
            cout<< endl;
        }
    }
};
int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.pattern19(n);
    return 0;
}