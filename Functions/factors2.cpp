#include <bits/stdc++.h>
using namespace std;

int factor(int a){
    for (int i=a; i>0; i--){
        if(a%i==0){
            cout << i << " ";
        }
    }
    return 0;
}

int main(){
    int n; cin >> n;
    factor(n);
    return 0;
}