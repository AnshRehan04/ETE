#include <iostream>
#include <vector>
#include <set>
using namespace std;
set<int> unionofarray(int arr[],int arr1[],int n,int m){
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            s.insert(arr[i]);
            s.insert(arr1[j]);
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

    int m;
    cin>>m;
    int arr1[m];
    for (int j = 0; j < m; j++)
    {
        cin>>arr1[j];
    }
    set<int> result=unionofarray(arr,arr1,n,m);
    for(auto &i:result){
        cout<<i<<" ";
    }
    
}