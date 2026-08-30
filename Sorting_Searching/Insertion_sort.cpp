#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector <int> v(n);
    for(int &N : v){
        cin >> N;
    }
    for(int i=1; i<n;i++){
        int j=i-1;
        int temp = v[i];
        int shift =0;
        while(j>=0 && v[j]>temp){
            v[j+1] = v[j];
            shift++;
            j--;
        }
        v[j+1]=temp;
        printf("Pass %d: ",i);
        for(int N:v){
            cout<< N << " ";
        }
        cout << ", ";
        for(int k=0; k<=i;k++){
            cout<< v[k]<<" ";
        }
        cout << "| ";
        for(int k=i+1; k<n; k++){
            cout << v[k]<< " ";
        }
        printf(", shifts = %d",shift);
        cout << endl;
    }
    return 0;
}