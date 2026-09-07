#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    bool prime = true;
    for(int i =2 ; i<=sqrt(n); i++){
        if(n%i==0){
            prime = false;
            break;
        }
    }
    if(n<2){
        cout << "NO";
        return 0;
    }
    if(!prime){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}