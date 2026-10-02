#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i=0; i<(2*n)-1; i++){
        if(i<n){
            int space = (2*i)+1;
            int star = (2*n)-space +1;
            for(int j=0; j<star/2; j++){
                cout << "*";
            }
            for(int j=0; j<space; j++){
                cout << " ";
            }
            for(int j=0; j<star/2; j++){
                cout << "*";
            }
        }
        else{
            int star = i-n +2;
            int space = (2*n)+1-(2*star);
            for(int j=0; j<star; j++){
                cout << "*";
            }
            for(int j=0; j<space; j++){
                cout << " ";
            }
            for(int j=0; j<star; j++){
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}