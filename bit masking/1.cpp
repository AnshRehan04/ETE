#include <iostream>
using namespace std;

bool isSubsetSumZero(int arr[], int n) {
    // Checking all non-empty subsets using bit manipulation
    for (int i = 1; i < (1 << n); ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                sum += arr[j];
            }
        }
        if (sum == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int arr[4];
        for (int i = 0; i < 4; ++i) {
            cin >> arr[i];
        }
        
        if (isSubsetSumZero(arr, 4)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
