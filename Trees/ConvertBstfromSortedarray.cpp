#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* convert(int arr[],int start,int end){

    int mid=(start+end)/2;

    if(start>end){
        return NULL;
    }
    Node* root=new Node(arr[mid]);
    root->left=convert(arr,start,mid-1);
    root->right=convert(arr,mid+1,end);
    return root;
}
void preorder(Node* &root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    

    Node * root=convert(arr,0,n-1);
    preorder(root);
}