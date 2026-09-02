// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n; cin>> n;
//     vector<int> v(n);
//     for(int &N:v){
//         cin >> N;
//     }
//     int max = INT_MIN, second_max =INT_MIN ;
//     for(int i =0; i<n;i++){
//         if(v[i]>max){
//             second_max = max;
//             max = v[i];
//         }
//         else if(v[i]>second_max and v[i]!=max){
//             second_max = v[i];
//         }
//     }
//     if(second_max==INT_MIN){
//         cout << -1;
//     }
//     else{
//         cout << second_max;
//     }
//     return 0;
// }
int largest = INT_MIN;
int second_largest = INT_MIN;
bool found_second = false;

for (int x : v) {
    if (x > largest) {
        second_largest = largest;
        largest = x;
        if (second_largest != INT_MIN)
            found_second = true;
    }
    else if (x < largest && (!found_second || x > second_largest)) {
        second_largest = x;
        found_second = true;
    }
}

cout << (found_second ? second_largest : -1);