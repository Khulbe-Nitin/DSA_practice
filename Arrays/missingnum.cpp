// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin>> n;
//         int arr[n];
//         for (int i =0; i<n; i++){
//             cin >> arr[i];
//         }
//         for (int i=0; i<n;i++){
//             int j = n-1;
//             bool duplicate = false;
//             while (j>=0){
//                 if (arr[i]== arr[j] && i!=j){
//                     duplicate = true;
//                     break;
//                 }
//                 j--;
//             }
//             if (duplicate == false){
//                     cout << arr[i] << endl ;
//                     break;
//                 }
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans ^= x;
        }

        cout << ans << '\n';
    }

    return 0;
}