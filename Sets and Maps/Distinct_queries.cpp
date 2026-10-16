#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    set <long long int> distinct;
    multiset <long long int> mul;
    while (q--){
        int y;
        long long int x;
        cin >> y;
        if(y==1){
            cin>>x;
            mul.insert(x);
            distinct.insert(x);
        }
        else if(y==2){
            cin>>x;
            mul.erase(x);
            distinct.erase(x);
        }
        else if(y==3){
            cout << distinct.size();
            cout <<"\n";
        }
        else if(y==4){
            cin>>x;
            if(mul.find(x)!=mul.end()){
                cout <<"YES" << "\n";
            }
            else{
                cout << "NO" <<"\n";
            }
        }
    }
    return 0;
}