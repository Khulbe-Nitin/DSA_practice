#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k; cin >> n >>k;
    priority_queue<long long int> pq;
    int factor = -1;
    for(long long int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            long long int temp = n/i;
            pq.push(i);
            if(temp ==i) pq.push(temp);
            while(pq.size()>k){
                pq.pop();
            }
        }
    }
    if(pq.size()<k){
        cout << -1;
    }
    else{
        cout << pq.top();
    }
    return 0;
}