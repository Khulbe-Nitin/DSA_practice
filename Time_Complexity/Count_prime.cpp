#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int count =0;
    while(n>=2){
        bool prime=true;
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                prime = false;
                break;
            }
        }
        if(prime){
            count++;
        }
        n--;
    }
    cout << count;
    return 0;
}