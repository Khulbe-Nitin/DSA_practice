#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    for(auto &c: s){
        if(c >= 65 and c<=90){
            c +=32;
        }
        else if(c >=97 and c<=122){
            c -= 32;
        }
    }
    cout << s;
    return 0;
}