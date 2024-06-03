#include <iostream>
using namespace std;
const int Max_N=100;
// Check if path is valid or not.
bool isvalid(int rows,int col,int arr[Max_N][Max_N],int N){
    return (rows>=0 && rows<N && col>=0 && col<N && arr[rows][col]==1 );
}

void findpath(int rows,int col,string path,int arr[Max_N][Max_N],int N){
    // Create path
    if (rows==N-1 && col==N-1)
    {
        cout<<path<<" ";
        return;
    }
    // Mark the path as visited
    arr[rows][col]=0;

    if (isvalid(rows+1,col,arr,N))
    {
        findpath(rows+1,col,path+"D",arr,N);
    }
    if (isvalid(rows-1,col,arr,N))
    {
        findpath(rows-1,col,path+"U",arr,N);
    }
     if (isvalid(rows,col+1,arr,N))
    {
        findpath(rows,col+1,path+"R",arr,N);
    }
     if (isvalid(rows,col-1,arr,N))
    {
        findpath(rows,col-1,path+"L",arr,N);
    }
    // Unmark the path
    arr[rows][col]=1;
}
int main(){
    int N;
    cout<<"Enter the size of maze ";
    cin>>N;
    int arr[Max_N][Max_N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>arr[i][j];
        }
    }

    bool pathfound=false;
    if (arr[0][0]==1)
    {
        findpath(0,0,"",arr,N);
    }
    if (!pathfound)
    {
        cout<<"Not Path found ";
    }
    
    
    
}