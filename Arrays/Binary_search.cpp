#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key ";
    cin>>key;
    cout<<"Key is at "<<binarysearch(arr,n,key);
}