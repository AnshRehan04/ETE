// Time complexity : O(n)
// Space complexity : O(1)
#include <iostream>
using namespace std;
void firstandlast(int arr[],int n,int key){
    int s=-1;
    int e=-1;
    for (int i = 0; i <n;i++)
    {
        if (arr[i]==key)
        {
            s=i;
            break;
        }
    }
    for (int j = n-1;j>=0; j--)
    {
        if (arr[j]==key)
        {
            e=j;
            break;
        }
    }
    cout<<"First occurence at "<<s<<endl;
    cout<<"Last occurence at "<<e<<endl;
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
    firstandlast(arr,n,key);
}