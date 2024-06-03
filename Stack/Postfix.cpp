#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluatePostfix(string str) {
    stack<int> s;
    stringstream ss(str);
    string token;

    while (ss >> token) {
        if (token == "+") {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            s.push(num1 + num2);
        } else if (token == "-") {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            s.push(num1 - num2);
        } else if (token == "*") {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            s.push(num1 * num2);
        } else if (token == "/") {
            int num2 = s.top();
            s.pop();
            int num1 = s.top();
            s.pop();
            s.push(num1 / num2);
        } else {
            // Token is a number
            s.push(stoi(token));
        }
    }

    return s.top();
}

int main() {
    string str;
    getline(cin,str);
    cout << evaluatePostfix(str) << endl; // Output: 5

    return 0;
}