#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
    for(long long int i=1; i<=sqrt(n); i++){
        if(n%i==0 && i!=sqrt(n)){
            pq.push(i);
            pq.push(n/i);
        }
        else if(n%i==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cout << pq.top()<< " ";
        pq.pop();
    }
    return 0;
}