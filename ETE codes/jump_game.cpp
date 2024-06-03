#include <iostream>
using namespace std;
bool reachable(int arr[],int n){
    int reach=0;
    for (int i = 0; i < n; i++)
    {
        if (i>reach)
        {
            return false;
        }
        reach=max(reach,i+arr[i]);
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (reachable(arr,n))
    {
        cout<<"True";
    }
    else{
        cout<<"False ";
    }
    
}