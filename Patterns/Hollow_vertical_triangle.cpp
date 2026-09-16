#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int len = (2*n)-1;
    for(int i=0; i<len;i++){
        if(i<n){
            for(int j=0;j<=i; j++){

                if(j==0 or j==i){
                    cout << "*"<<" ";
                }
                else{
                    cout << " ";
                }
            }
            cout << "\n";
        }
        else{
            for(int j=len-i; j>0;j--){
                if(j==1 or j==len-i){
                    cout << "*"<<" ";
                }
                else{
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}