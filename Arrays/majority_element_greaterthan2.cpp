#include <iostream>
using namespace std;
int majority(int nums[],int n){

   for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                count++;
            }
            if(count>n/2){
                return nums[i];
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    cout<<"Majority element is "<<majority(nums,n);
}