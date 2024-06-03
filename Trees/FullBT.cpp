#include <iostream>
#include <queue>
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

Node* buildtree(){
    int data;
    cin>>data;
    if (data==-1)
    {
        return NULL;
    }

    Node* root=new Node(data);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}
bool isfull(Node* &root){
    if(root==NULL) return false;

    if(root->left==NULL && root->right==NULL){
        return true;
    }
    else if(root->left && root->right){
        return (isfull(root->left) && isfull(root->right));
    }
    return false;
}
int main(){
    Node* root=buildtree();
    if(isfull){
        cout<<"Full binary ";
    }
    else{
        cout<<"Not Full binary ";
    }
}