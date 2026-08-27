// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin >> t;
//     while (t--)
//     {   int n; cin>> n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//         }
//         int x; cin >> x;
//         vector<pair<int, int>> v;
//         int count =0;
//         for (int i=0; i<n; i++){
//             bool sum = false;
//             bool used = false;
//             for(int j=0; j<n; j++){
//                 used = false;
//                 if(i==j){
//                     continue;
//                 }
//                 for(auto &y : v){
//                     if(y == pair<int,int>{i,j} or y== pair<int,int>{j,i}){
//                         used = true;
//                         break;
//                     }
//                 }
//                 if(arr[i]+arr[j]==x && used == false){
//                     sum = true;
//                     v.push_back({i,j});
//                     count++;
//                 }
//             }
//         }
//         cout << count;
//         /* code */
//         cout << endl ;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--)
    {   int n; cin>> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int x; cin >> x;
        int count =0;
        for (int i=0; i<n; i++){
            int j=i+1;
            while(j<n){
                if(arr[i]+arr[j]==x){
                    count++;
                }
                j++;
            }
        }
        cout << count;
        /* code */
        cout << endl ;
    }
    return 0;
}