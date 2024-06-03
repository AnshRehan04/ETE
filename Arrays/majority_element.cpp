#include <iostream>
using namespace std;
int majority(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]==arr[i-1])
        {
            return arr[i];
        }
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
    cout<<"Majority element is "<<majority(arr,n);
}