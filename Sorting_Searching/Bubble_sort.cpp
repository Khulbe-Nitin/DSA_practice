#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector < int> v(n);
    for(int &N:v){
        cin >> N;
    }
    for(int i =0; i<n-1;i++){
        int count =0;
        for(int j=0; j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                count ++;
            }
        }
        printf("Pass %d: ",i+1);
        for(int N:v){
            cout << N << " ";
        }
        printf(", swaps = %d",count);
        cout << endl;
        if(count == 0){
            break;
        }
    }
    return 0;
}