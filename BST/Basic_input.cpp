#include <iostream>
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

Node* buildtree(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val > root->data) {
        root->right = buildtree(root->right, val);
    } else {
        root->left = buildtree(root->left, val);
    }
    return root;
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = buildtree(root, val);
    }
    preorder(root);
    return 0;
}
