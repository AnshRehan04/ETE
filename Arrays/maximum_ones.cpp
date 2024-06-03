#include <iostream>
using namespace std;
int maxones(int arr[],int n){
    int maxi=-1;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
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
    cout<<"Maximum consectives ones are "<<maxones(arr,n);
}