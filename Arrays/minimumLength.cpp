#include <iostream>
using namespace std;
int minimumlength(int arr[],int n,int k){
    int mini=n;
    int i=0;
    int j=0;
    int sum=0;
    while (j<n)
    {
        sum=sum+arr[j];
        while (sum>=k)
        {
            mini=min(mini,j-i+1);
            sum=sum-arr[i];
            i++;
        }
        j++;
    }
    if (mini == n) {
            return 0;
        } else {
            return mini;
        }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the key ";
    cin>>k;
    cout<<"minimum length is "<<minimumlength(arr,n,k);
}