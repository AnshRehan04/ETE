#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform binary search
int binarySearch(const vector<string>& songs, const string& target) {
    int left = 0;
    int right = songs.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (songs[mid] == target) {
            return mid;
        }
        else if (songs[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after the integer input

    vector<string> songs(n);
    for (int i = 0; i < n; ++i) {
        cin >> songs[i];
    }

    string target;
    cin >> target;

    // Sort the array of song titles
    sort(songs.begin(), songs.end());

    // Perform binary search to find the index of the target song
    int index = binarySearch(songs, target);

    // Output the result
    cout << index << endl;

    return 0;
}
