#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i =0, j=n-1;

   while(i<j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
    i++;
    j--;
   }
   for (int x: arr){
    cout << x<< " ";
   }
   return 0;
}