#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(false);
    int Q; cin >> Q;
    while (Q--)
    {
        int L,R; cin >>L >> R;
        long long int sum = ((R-L+1)*(L+R))/2;
        cout << sum << "\n";
        /* code */
    }
    return 0;
}