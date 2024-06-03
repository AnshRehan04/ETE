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
        Node* front=q.front();
        q.pop();

        int left,right;
        cin>>left>>right;
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

int sumtoleaf(Node* &root,int curr=0)
{

    if(root==NULL) return 0;
    curr=(curr*10)+root->data;
    if (root->left==NULL && root->right==NULL)
    {
        return curr;
    }
    else{
        int lh=sumtoleaf(root->left,curr);
        int rh=sumtoleaf(root->right,curr);
        return (lh+rh);
    }
    
    
}
int main(){
    Node* root=buildtree();
    cout<<"Sum is "<<sumtoleaf(root,0);
}