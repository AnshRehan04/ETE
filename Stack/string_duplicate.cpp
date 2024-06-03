// Remove All Adjacent Duplicates In String
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string removeduplicate(string str){
    stack<char> st;
    int n=str.length();
    string temp="";
    for (int i = 0; i < n; i++)
    {
        if(st.empty() || st.top()!=str[i])
        {
            st.push(str[i]);
        }
        else {
            st.pop();
        }
    }
    while (!st.empty())
    {
        temp.push_back(st.top());
        st.pop();
    }
    reverse(temp.begin(),temp.end());
    return temp;
}


int main(){
    string str;
    getline(cin,str);
    cout<<removeduplicate(str);
}