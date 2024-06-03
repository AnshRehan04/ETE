#include <iostream>
#include <stack>
#include <sstream>
using namespace std;
int postfix(string str){
    stack<int> s;
    stringstream ss(str);
    string token;

    while (ss>>token)
    {
        if (token=="+")
        {
            int num2=s.top();
            s.pop();
            int num1=s.top();
            s.pop();
            s.push(num1+num2);
        }
        else if(token=="-"){
            int num2=s.top();
            s.pop();
            int num1=s.top();
            s.pop();
            s.push(num1-num2);
        }
        else if(token=="*"){
            int num2=s.top();
            s.pop();
            int num1=s.top();
            s.pop();
            s.push(num1*num2);
        }
        else{
            s.push(stoi(token));
        }
        
    }
    return s.top();
    
}
int main(){
    string str;
    getline(cin,str);

    cout<<postfix(str);

}