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
Node* buildTree(){
    int data;
    cin >> data;
    auto * root = new Node(data);
    queue<Node*> q{{root}};

    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            auto front = q.front();
            q.pop();

            int left, right;
            cin >> left >> right;

            if(left!=-1){
                front->left = new Node(left);
                q.push(front->left);
            }
            if(right!=-1){
                front->right = new Node(right);
                q.push(front->right);
            }
        }
    }
    return root;
}
int height(Node* &root){
    if(root==NULL) return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return 1+max(lh,rh);

}
int main(){
    Node* root=buildTree();
    cout<<"Height is "<<height(root);
}