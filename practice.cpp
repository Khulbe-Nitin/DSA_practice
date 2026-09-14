#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int len = 2*n -1;
    for(int j=0; j<len; j++){
        if(j <n){
            for(int i=0; i<=j; i++){
                cout << "*" << " ";
            }
            cout << "\n";
        }
        else{
            for(int i= len-j; i>0; i--){
                cout << "*" << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}