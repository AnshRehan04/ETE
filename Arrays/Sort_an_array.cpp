#include <iostream>
using namespace std;
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n;j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
void print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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
    sort(arr,n);
    print(arr,n);
}