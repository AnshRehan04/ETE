#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.length();

    stringstream ss(str);
    string token="";
    string result="";

    while (ss>>token)
    {
        result=token+" "+result;
    }
    if(!result.empty() && result.back()==' '){
        result.pop_back();
    }
    cout<<result;
    
    
}