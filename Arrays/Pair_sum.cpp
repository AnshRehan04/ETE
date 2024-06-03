#include <iostream>
#include <vector>
using namespace std;
int pairsum(int arr[],int n,int sum){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j <n;j++)
        {
            if (arr[i]+arr[j]==sum)
            {
                return i,j;
            }
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
    int sum;
    cout<<"Enter key ";
    cin>>sum;
    cout<<pairsum(arr,n,sum);
}