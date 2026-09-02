#include <bits/stdc++.h>
using namespace std;

int main(){
    string n; cin >> n;
    long long int sum =0;
    for(char c:n){
        sum += c -'0';
    }
    cout << sum;
    return 0;
}