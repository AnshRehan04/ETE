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
    }
    return root;
}
void levelorder(Node* &root){
    if(root==NULL) return ;

    queue<Node*> q{{root}};


    while (!q.empty())
    {
        Node* front=q.front();
        q.pop();

        if(front!=NULL){
            cout<<front->data<<" ";

            if(front->left!=NULL)
            q.push(front->left);

            if(front->right!=NULL)
            q.push(front->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    
}
int main(){

    Node* root=buildtree();
    levelorder(root);

}