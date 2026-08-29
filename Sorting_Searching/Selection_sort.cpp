#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int &N : v){
        cin >> N;
    }
    for(int i = 0;i<n-1; i++){
        int min = v[i];
        int min_index = i;
        for(int j=i+1; j<n;j++){
            if (v[j]<min){
                min = v[j];
                min_index = j;
            }
        }
        swap(v[i],v[min_index]);
        printf("Pass %d: ", i+1);
        for(int N: v){
            cout << N << " ";
        }
        cout <<","<< " "<< "min_selected = "<< min;
        cout << endl;
    }
}