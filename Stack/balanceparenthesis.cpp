#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isbalanced(string s){
      stack<char> stk;
    for(char c:s){

    if(c=='(' || c=='{' || c=='[') stk.push(c);
    else{
        if(stk.empty()) return false;
        else if(stk.top()='('&& c==')') stk.pop();
        else if(stk.top()='{'&& c=='}') stk.pop();
        else if(stk.top()='['&& c==']') stk.pop();
        else{
            return false;
        }
    }
    }
    return stk.empty();
    
}
int main(){
    string s;
    cin>>s;
    if(isbalanced(s)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}