#include <iostream>
using namespace std;
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j=i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int kthlarget(int arr[],int n,int k){
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        return arr[n-k];
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
    int k;
    cout<<"Enter value ";
    cin>>k;
    cout<<kthlarget(arr,n,k);
}