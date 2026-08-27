#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0 ; i<n; i++){
            cin >> arr[i];
        }
        int m; cin >> m;
        int arr_1[m];
        for(int i=0; i<m; i++){
            cin >> arr_1[i];
        }
        //for storing used index values of intersection array
        bool used[m]= {false};
        for(int i=0; i<n;i++){
            bool matchfound = false;
            for (int j=0; j<m; j++){
                if(arr[i]==arr_1[j] && used[j]== false){
                    matchfound = true;
                    used [j]= true;
                    break;
                }
            }
            if(matchfound){
                cout << arr[i]<< " ";
            }
        }
        cout << endl;
    }
    return 0;
}