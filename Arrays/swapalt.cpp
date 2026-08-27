#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        // Input array elements
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Swap alternate elements
        for(int i = 0, j = 1; j < n; i += 2, j += 2) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        // Print the modified array immediately
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}