#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int i =1;
    int space = 2*(n-i);
    int star = (2*n)-space;
    while(i<=((2*n)-1)){
        for (int j=0;j<star/2; j++){
            cout << "*";
        }
        for (int j=0;j<space; j++){
            cout << " ";
        }
        for (int j=0;j<star/2; j++){
            cout << "*";
        }
        cout << "\n";
        i++;
        space = 2*abs(n-i);
        star = (2*n)-space;
        
    }
    return 0;
}