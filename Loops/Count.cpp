#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int pos=0,neg=0,even=0;
    for(int i=0; i<n;i++){
        long long x ;
        cin >> x;
        if(x<0){
            neg++;
        }
        else if(x>0){
            pos++;
        }
        if(abs(x)%2==0){
            even++;
        }
    }
    cout << pos <<"\n";
    cout << neg <<"\n";
    cout << even <<"\n";
    cout << n-even <<"\n";
    return 0;
}