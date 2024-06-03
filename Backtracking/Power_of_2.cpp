#include <iostream>
using namespace std;
bool ispowerof2(int n){
    if (n==0)
    {
        return 0;
    }
    while (n%2==0)
    {
        n=n/2;
    }
    return n==1;
}
int main(){
    int n;
    cin>>n;

    if (ispowerof2(n))
    {
        cout<<"True";
    }
    else{
        cout<<"False ";
    }
    
}