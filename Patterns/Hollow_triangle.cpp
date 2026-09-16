#include <iostream>
using namespace std;

int main(){
    int n; cin >>n;
    for(int i=0; i<n;i++){
        int space = n-i-1;
        for(int j=0; j<space; j++){
            cout << " ";
        }
        if(i==0 or i==n-1){
            for(int j=0; j<=i; j++){
                cout <<"*"<<" ";
            }
        }
        else{

            for(int j=0; j<=i; j++){
                if(j==0 or j==i){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}