#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n; cin >> n;
    int i=0;
    int space = abs(n-i-1);
    int star = n-space;
    while(i<((2*n)-1)){
        for(int j=0; j<space; j++){
            cout << " ";
        }
        for(int j=0; j<star; j++){
            if(j==0 or j==star-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
        i++;
        space = abs(n-i-1);
        star = n-space;
    }
    return 0;
}