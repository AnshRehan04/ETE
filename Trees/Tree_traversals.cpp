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
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    queue<Node*> q{{root}};
    while (!q.empty())
    {
        int left,right;
        cin>>left>>right;
        Node* front=q.front();
        q.pop();

        if(left!=-1){
            front->left=new Node(left);
            q.push(front->left);
        }
        if(right!=-1){
            front->right=new Node(right);
            q.push(front->right);
        }
    }return root;
}
void inorder(Node* &root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* &root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* &root){
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
}
int main(){
    Node* root=buildtree();
    cout<<"inorder ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder "; 
    preorder(root);
    cout<<endl;
    cout<<"Postorder ";
    postorder(root);

}