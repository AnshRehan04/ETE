// Write a C++ program to create tree a given and count the size of the tree.
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
int sizeoftree(Node* &root){
    if(root==NULL) return 0;
    return sizeoftree(root->left)+sizeoftree(root->right)+1;
}
int main(){
    Node* root=buildtree();
    cout<<"size of tree is "<<sizeoftree(root);

}