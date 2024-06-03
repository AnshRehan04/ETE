#include <iostream>
using namespace std;
bool isduplicate(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
    if (arr[i]==arr[i-1])
    {
        return 1;
    }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (isduplicate(arr,n))
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}