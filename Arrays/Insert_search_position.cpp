#include <iostream>
using namespace std;
int insertposition(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return s;
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

    cout<<insertposition(arr,n,key);
}