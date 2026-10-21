// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     long long int x; cin >> x;
//     vector <long long int> v(n);
//     for(int i=0; i<n; i++){
//         long long int x; cin >> x;
//         v.push_back(x);
//     }
//     int i =0, j=n-1;
//     map <pair<long long int, long long int>, int> res;
//     while(i<j){
//         for(int z=j; z>i; z--){
//             if(v[z]+v[i]==x){
//                 res[v[i],v[z]] =1;
//                 cout << "TRUE";
//                 return 0;
//             }
//             else{
//                 res[v[i],v[z]] =1;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    cin >> x;

    vector<long long> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == x) {
                cout << "TRUE";
                return 0;
            }
        }
    }

    cout << "FALSE";
    return 0;
}
