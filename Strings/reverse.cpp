#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int len = s.size();
    int i=0, j=len-1;
    while(i<j){
        int temp = s[i];
        s[i] = s[j];
        s[j]= temp;
        i++;
        j--;
    }
    cout << s;
    return 0;
}