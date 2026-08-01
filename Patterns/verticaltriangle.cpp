#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = (2*n)-1;
    int star = n-1;
    for (int i=0; i<m;i++){
        if (i<n){
            for(int j=0; j<=i;j++){
                cout << "* ";
            }
            cout << endl;
        }
        else{
            for(int j = star; j>0;j--){
                cout<< "* ";
            }
            star--;
            cout << endl;
        }
    }
}