#include <bits/stdc++.h>
using namespace std;

// Problem: Given n integers and a target x, decide whether some
// contiguous subarray sums to exactly x.
//
// Brute force tries every (start, end) pair, which is O(n^2) and too
// slow for n = 2*10^5. This solution runs in O(n log n).
//
// Key idea: prefix sums.
//   Let P[k] = a[1] + ... + a[k], with P[0] = 0.
//   The sum of the subarray a[i+1..j] equals P[j] - P[i].
//   We want P[j] - P[i] == x, i.e. P[i] == P[j] - x.
//   So for each j, we only need to know whether the value P[j] - x
//   has already appeared among the earlier prefix sums.

int main(){
    // Speed up input reading. With up to 2*10^5 numbers, the default
    // synchronized cin is noticeably slower.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;   // n up to 2*10^5, x in [-10^18, 10^18]
    cin >> n >> x;

    // Stores every prefix sum seen so far (P[0], P[1], ..., P[j-1]).
    // This set replaces the prefix array: it answers "have I seen this
    // value?" in O(log n) time.
    // Seeded with P[0] = 0, the empty prefix, so that a subarray
    // starting at the first element can be detected.
    set<long long> seen;
    seen.insert(0);

    // Holds only the current prefix sum P[j]. We update it in place
    // instead of storing an array of all prefix sums.
    long long prefix = 0;

    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        prefix += a;   // now prefix == P[i+1]

        // Is there an earlier prefix P[k] with P[k] == prefix - x?
        // If so, the subarray a[k+1..i+1] sums to exactly x.
        // Note: we check BEFORE inserting the current prefix. This
        // guarantees the subarray is non-empty. Otherwise, when x == 0,
        // the current prefix would match itself and report a false YES.
        if(seen.count(prefix - x)){
            cout << "YES";
            return 0;
        }

        // Record the current prefix so later positions can match against it.
        seen.insert(prefix);
    }

    // No earlier prefix ever matched, so no subarray sums to x.
    cout << "NO";
    return 0;
}