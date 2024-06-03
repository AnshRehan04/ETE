#include <iostream>
using namespace std;
const int max_n=100;
bool isvalid(int rows,int cols,int arr[max_n][max_n],int n){
    return (rows>=0 && rows<n  && cols>=0 && cols<n && arr[rows][cols]==1);
}

void findpath(int rows,int cols,string path,int arr[max_n][max_n],int n){
    if(rows==n-1 && cols==n-1){
        cout<<path<<" ";
        return;
    }

    arr[rows][cols]=0;

    if(isvalid(rows+1,cols,arr,n)){
        findpath(rows+1,cols,path+"D",arr,n);
    }

    if(isvalid(rows-1,cols,arr,n)){
        findpath(rows-1,cols,path+"U",arr,n);
    }

    if(isvalid(rows,cols+1,arr,n)){
        findpath(rows,cols+1,path+"R",arr,n);
    }

    if(isvalid(rows,cols-1,arr,n)){
        findpath(rows,cols-1,path+"L",arr,n);
    }

    arr[rows][cols]=1;
}

int main(){
    int n;
    cin>>n;
    int arr[max_n][max_n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    findpath(0,0,"",arr,n);
    
    
}