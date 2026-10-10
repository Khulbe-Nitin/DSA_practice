#include <bits/stdc++.h>
using namespace std;

int zero(long long int a){
    long long int i=a;
    int count =0;
    if(i==0){
        cout << 1;
        return 0;
    }
    while (i>0){
        long long int temp = i%10;
        if(temp ==0){
            count++;
        }
        i /= 10;
    }
    cout << count;
    return 0;
}
int main(){
    long long int n; cin >> n;

    zero(n);
    return 0;
}