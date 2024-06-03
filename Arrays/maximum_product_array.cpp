#include <iostream>
using namespace std;
int maximumproduct(int arr[],int n){
    int prod=1;
    int maxi=arr[0];
    for (int i = 0; i < n; i++)
    {
        prod*=arr[i];
        if (prod>maxi)
        {
            maxi=max(maxi,prod);
        }
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
    cout<<"Maximum product is "<<maximumproduct(arr,n);
}