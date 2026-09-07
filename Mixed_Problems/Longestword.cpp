#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin,s);
    int longest =0,len=0;
    for(char c: s){
        if(c != ' '){
            len++;
        }
        else if(longest<len){
            longest = len;
            len =0;
        }
        else{
            len =0;
        }
    }
    if (longest<len){
        longest = len;
    }
    cout << longest;
    return 0;
}