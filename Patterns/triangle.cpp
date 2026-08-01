#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>> n;
    long long space = n-1;
    for(int i=0; i<n;i++){
        for(int j=0; j<space;j++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            if (j==i){
                cout << "*";
            }
            else{
            cout <<"* ";
            }
        }
        cout<< endl;
        space--;
    }
}