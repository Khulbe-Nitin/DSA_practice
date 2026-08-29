#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int len = s.size();
    bool length = false, lower=false, upper =false, digit=false, special =false;
    if (len == 10){
            length =true;
        }
    for(int i=0; i<len; i++){
        if(s[i]>= 97 and s[i]<= 122){
            lower = true;
        }
        else if(s[i]>=65 and s[i]<= 90){
            upper = true;
        }
        else if(s[i]>=48 and s[i]<=57){
            digit =true;
        }
        else{
            special =true;
        }
    }
    if( length and lower and upper and digit and special){
        cout << "Strong";
    }
    else {
        cout << "Weak";
    }
    return 0;
}