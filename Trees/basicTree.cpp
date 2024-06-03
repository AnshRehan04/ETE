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
Node* inorder(Node* &root){
    if (root==NULL) return NULL;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
int main(){
    Node* root=buildtree();

    inorder(root);

}