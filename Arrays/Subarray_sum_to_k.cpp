#include <iostream>
using namespace std;

int subarray(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the key: ";
    cin >> k;
    cout << subarray(arr, n, k);
}
