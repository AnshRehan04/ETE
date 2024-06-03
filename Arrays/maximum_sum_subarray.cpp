#include <iostream>
using namespace std;
int maximumsum(int arr[],int n){
    int sum=0;
    int maxi=arr[0];
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
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
    cout<<"Maxmium sum "<<maximumsum(arr,n);
}