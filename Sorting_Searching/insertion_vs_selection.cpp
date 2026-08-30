#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int &N: v){
            cin >> N;
        }
        vector<int> v2 = v;
        int swaps =0, shifts = 0;
        for(int i=0;i<n-1;i++){
            int min_index = i;
            bool found = false;
            for(int j=i+1;j<n;j++){
                if(v2[j]<v2[min_index]){
                    min_index = j;
                    found = true;
                }
            }
            if(found){
                swap(v2[i],v2[min_index]);
                swaps++;
            }
        }
        v2= v;
        for(int i=1; i<n;i++){
            int temp = v2[i];
            int j= i-1;
            while(j>=0 && v2[j]>temp){
                v2[j+1] = v2[j];
                j--;
                shifts ++;
            }
            v2[j+1]= temp;
        }
        if(swaps>shifts){
            cout << "Insertion Sort"<< endl;
        }
        else if(swaps < shifts){
            cout << "Selection Sort"<< endl;
        }
        else{
            cout << "Tie"<< endl;
        }
    }
    return 0;
}