#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    
    for(int i=n-1; i>=0;i--){
        // initial spaces
        for(int j=0;j<n-i-1; j++){
            cout << ' ';
        }
        for(int j=0; j<=i;j++){
            if(j==0 || j==i || i==n-1){
                cout << "*" << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout <<"\n";
    }
    return 0;
}