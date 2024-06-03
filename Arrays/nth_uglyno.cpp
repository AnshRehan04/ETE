#include <iostream>
using namespace std;

// Function to check if a number is ugly or not
bool isUgly(int num) {
    if (num <= 0) return false;
    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;
    return num == 1;
}

// Function to find the nth ugly number
int getNthUglyNumber(int n) {
    int count = 1; // Ugly numbers count
    int number = 1; // Current number to check
    
    while (count < n) {
        number++;
        if (isUgly(number)) {
            count++;
        }
    }
    return number;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int nthUglyNumber = getNthUglyNumber(n);
    cout << "The " << n << "th ugly number is: " << nthUglyNumber << endl;

    return 0;
}
