#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;

    for(int i=0; i<2*n-1; i++){
        if(i<n){
            // initial spaces
            for(int j=0; j<n-i-1; j++){
                cout <<' ';
            }
            // Triangle
            for(int j=0; j<=i; j++){
                cout << "*"<< ' ';
            }
        }
        else{
            // Initial spaces
            for(int j=0; j<i-n+1;j++){
                cout << ' ';
            }
            for(int j=0;j<2*n-1-i; j++){
                cout <<"*"<< " ";
            }
        }
        cout << "\n";
    }
    return 0;
}