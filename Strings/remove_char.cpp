#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    char x; cin >> x;
    string result;
    result.reserve(s.size());

    for(auto c: s){
        if(c !=x){
            result += c;
        }
    }
    cout << result;
    return 0;
}