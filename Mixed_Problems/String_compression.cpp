#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int len = s.size();
        int count =0;
        for(int x=0;x<len;x++){
            int j= x+1;
            if(s[x]==s[j]){
                count++;
            }
            else if(s[x]!=s[j] && count>0){
                cout << s[x]<<++count;
                count =0;
            }
            else{
                cout <<s[x];
            }
        }
        cout << endl;
    }
    return 0;
}