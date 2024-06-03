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
int sumofleaf(Node* root){
    if(root==NULL) return 0;

    int sum=0;
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    return sumofleaf(root->left)+sumofleaf(root->right);

}
int main(){
    Node* root=buildtree();
    cout<<"Sum of leaf nodes is "<<sumofleaf(root);
}