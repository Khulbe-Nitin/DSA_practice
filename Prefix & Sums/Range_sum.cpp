#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     int n; cin >>n;
//     vector <int> v(n);
//     for(auto &N: v){
//         cin >> N;
//     }
//     int q; cin >>q;
//     while(q--){
//         int l,r; cin >> l>> r;
//         int sum =0;
//         for(int i=l; i<=r; i++){
//             sum += v[i-1];
//         }
//         cout << sum<<"\n";
//     }
//     return 0;
// }
// Above is the naive approach

// PREFIX SUM ARRAY
int main(){
    int n; cin >>n;
    vector <long long int> v(n);
    for(auto &N: v){
        cin >> N;
    }
    vector <long long int> prefix(n);
    long long int sum =0;
    for(int i=0;i<n;i++){
        sum += v[i];
        prefix[i] = sum;
    }
    int q; cin >>q;
    while(q--){
        int l,r; cin >> l>> r;
        if(l==1){
            cout << prefix[r-1]<< endl;
        }
        else{
            cout << prefix[r-1]-prefix[l-2] << endl;
        }
    }
    return 0;
}