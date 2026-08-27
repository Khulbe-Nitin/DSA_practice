#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
vector <vector <int>> ans;
while (t--){
    int n;
    cin >> n;
    int i=0, j=n-1;
    vector <int> arr(n);
    for(int x=1; x<=n;x++){
        if (x%2==0){
            arr[j]=x;
            j--;
        }
        else{
            arr[i]=x;
            i++;
        }
    }
    ans.emplace_back(arr);
}

//printing the array
for(auto &y : ans){
    for(auto x : y){
        cout << x << " ";
    }
    cout << endl ;
}
return 0;
}
