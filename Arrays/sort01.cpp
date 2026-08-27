#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<vector<int>> ans;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        int zeros = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] == 0)
                zeros++;
        }

        vector<int> sorted;

        for (int i = 0; i < zeros; i++)
            sorted.push_back(0);

        for (int i = zeros; i < n; i++)
            sorted.push_back(1);

        ans.push_back(sorted);
    }

    // Print after taking ALL input
    for (auto &arr : ans) {
        for (int x : arr)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}