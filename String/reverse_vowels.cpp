#include <bits/stdc++.h>
using namespace std;
bool isvowel(char &ch){
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'||
    ch=='E'||ch=='I'||ch=='O'|| ch=='U'){
        return 1;
    }
    return 0;
}

string reverse(string str){
    int s=0;
    int e=str.length()-1;
    while (s<=e)
    {
        if(!isvowel(str[s])){
            s++;
        }
        else if(!isvowel(str[e])){
            e--;
        }
        else{
            swap(str[s++],str[e--]);
        }
    }
    return str;
    
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverse(str);

}