#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q; cin >> Q;
    while(Q--){
        int T; cin >> T;
        long long int L,R; cin >> L >> R;
        if(L>R){
            cout << 0<<"\n";
            continue;
        }
        else if(T==1 && R>L){
            cout << (R-L)-1;
        }
        else if(T==4){
            cout << (R-L)+1;
        }
        else{
            cout << R-L;
        }
        cout << "\n";
    }
    return 0;
}