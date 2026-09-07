// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int m,n; cin >> m>>n;
//     vector <vector<int>> v(m,vector<int>(n));
//     for(int i = 0; i<m;i++){
//         for(int j=0; j<n;j++){
//             cin >> v[i][j];
//         }
//     }
//     vector<vector<bool>> used(m,vector<bool>(n)); 
//     if(m==1){
//         for(int i=0; i<n; i++){
//             cout << v[0][i]<< " ";
//         }
//         return 0;
//     }
//     if(n==1){
//         for(int i=0; i<m; i++){
//             cout << v[i][0] << " ";
//         }
//         return 0;
//     }
//     int i=0, j=0;
//     int right=0, down=0, left=0, up=0;
//     while(true){
//         bool exit = true;
//         while(true){
//             if(j>(n-1)-right){
//                 i++;
//                 right++;
//                 up++;
//                 break;
//             }
//             else if(used[i][j]==false){
//                 cout << v[i][j] << " ";
//                 used[i][j] =true;
//             }
//             j++;
//         }
//         j--;
//         while(true){
//             if(i>(m-1)-down){
//                 j--;
//                 down++;
//                 break;
//             }
//             else if(used[i][j]==false){
//                 cout << v[i][j] << " ";
//                 used[i][j] =true;
//             }
//             i++;
//         }
//         i--;
//         while(true){
//             if(j<(0+left)){
//                 i--;
//                 left++;
//                 break;
//             }
//             else if(used[i][j]==false){
//                 cout << v[i][j] << " ";
//                 used[i][j] =true;
//             }
//             j--;
//         }
//         j++;
//         while(true){
//             if(i<(0+up)){
//                 j++;
//                 break;
//             }
//             else if(used[i][j]==false){
//                 cout << v[i][j] << " ";
//                 used[i][j] =true;
//             }
//             i--;
//         }
//         i++;
//         for(int x=0;x<m; x++){
//             for(int y=0; y<n;y++){
//                 if(used[x][y]==false){
//                     exit = false;
//                 }
//             }
//         }
//         if(exit){
//             break;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> v[i][j];

    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    vector<int> result;
    result.reserve(m * n);

    while(top <= bottom && left <= right){
        for(int j = left; j <= right; j++)
            result.push_back(v[top][j]);
        top++;

        for(int i = top; i <= bottom; i++)
            result.push_back(v[i][right]);
        right--;

        if(top <= bottom){
            for(int j = right; j >= left; j--)
                result.push_back(v[bottom][j]);
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--)
                result.push_back(v[i][left]);
            left++;
        }
    }

    for(int idx = 0; idx < (int)result.size(); idx++){
        cout << result[idx];
        if(idx + 1 < (int)result.size()) cout << ' ';
    }
    cout << "\n";
    return 0;
}