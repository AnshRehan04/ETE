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

void printleaf(Node* &root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printleaf(root->left);
    printleaf(root->right);
}
int main(){
    Node* root=buildtree();
    printleaf(root);
}