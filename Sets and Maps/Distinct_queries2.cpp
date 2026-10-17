#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    map <long long int , int> distinct;
    multiset <long long int> mul;
    while (q--){
        int y;
        long long int x;
        cin >> y;
        if(y==1){
            cin>>x;
            if(distinct.find(x)!=distinct.end()){
                distinct[x]++;
            }
            else{
                distinct[x]=1;
            }
            mul.insert(x);
        }
        else if(y==2){
            cin>>x;
            if(distinct.find(x)!=distinct.end() && distinct[x]>0){
                auto it = mul.find(x);
                mul.erase(it);
                distinct[x]--;
                if(distinct[x]==0){
                    distinct.erase(x);
                }
            }

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