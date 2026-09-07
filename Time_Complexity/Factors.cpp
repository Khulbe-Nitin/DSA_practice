#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    long long int count =0;
    for(int i=1; i<=sqrt(n); i++){
        if(i==sqrt(n)){
            count++;
            break;
        }
        if(n%i==0){
            count +=2;
        }
    }
    cout << count;
    return 0;
}