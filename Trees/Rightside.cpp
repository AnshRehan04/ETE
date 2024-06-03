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
void rightside(Node* &root,int level,vector<int> &st){
    if(root==NULL) return;
    if(level==st.size()){
        st.push_back(root->data);
    }
    rightside(root->right,level+1,st);
    rightside(root->left,level+1,st);

}

int main(){
    Node* root=buildtree();
    vector<int> st;
    rightside(root,0,st);
    for(int it:st){
        cout<<it<<" ";
    }
}