#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector <int> v(n);
    for(auto &N:v){
        cin >> N;
    }
    int i=0; int j=i;
    while(i<n){
        for(int k=i; k<=j; k++){
            if(k==j){
                cout << v[k];
            }
            else{
                cout << v[k] << " ";
            }
        }
        cout << "\n";
        j++;
        if(j>n-1){
            i++;
            j=i;
        }
    }
    return 0;
}
