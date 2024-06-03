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

int height(Node* root) {
    if (root == NULL) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}

int main() {
    Node* root = buildtree();
    cout << "Height is " << height(root) << endl;
    return 0;
}
