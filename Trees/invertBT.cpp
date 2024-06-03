#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildtree() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    Node* root = new Node(data);

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        int left, right;
        cin >> left >> right;

        if (left != -1) {
            front->left = new Node(left);
            q.push(front->left);
        }
        if (right != -1) {
            front->right = new Node(right);
            q.push(front->right);
        }
    }
    return root;
}
Node* inverttree(Node* root){
    if(root==NULL) return NULL;

    Node* temp=root->left;

    root->left=inverttree(root->right);
    root->right=inverttree(temp);
    return root;

}
void preorder(Node* root){
    if(root==NULL) return ;

        cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root=buildtree();
    inverttree(root);
    preorder(root);
}