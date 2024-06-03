#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &arr,int n,int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<=n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    for (int i = n/2; i>=1; i--)
    {
        heapify(arr,n,i);
    }
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}