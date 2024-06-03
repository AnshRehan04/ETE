#include <iostream>
#include <limits.h>
using namespace std;
int stock(int arr[],int n){
    int maxi=0;
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]-mini);
    }
    return maxi;
}
int main(){
int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<stock(arr,n);
}