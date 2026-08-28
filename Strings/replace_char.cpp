#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    char a,b; cin >> a >> b;
    //size of string
    int len= s.size();
    for(int i =0; i<len; i++){
        if(s[i]== a){
            s[i]=b;
        }
    }
    cout << s ;
    return 0;
}