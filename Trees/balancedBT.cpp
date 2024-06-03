#include <iostream>
#include <queue>
#include <cmath>
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
    queue<Node*> q{{root}};

    while (!q.empty()) {
        int left, right;
        cin >> left >> right;
        Node* front = q.front();
        q.pop();

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
    return max(lh, rh) + 1;
}

bool isBalancedHelper(Node* root, int& height) {
    if (root == NULL) {
        height = 0;
        return true;
    }

    int lh = 0, rh = 0;
    bool isLeftBalanced = isBalancedHelper(root->left, lh);
    bool isRightBalanced = isBalancedHelper(root->right, rh);

    height = max(lh, rh) + 1;

    if (abs(lh - rh) > 1) {
        return false;
    }
    return isLeftBalanced && isRightBalanced;
}

bool isBalanced(Node* root) {
    int height = 0;
    return isBalancedHelper(root, height);
}

int main() {
    Node* root = buildtree();
    if (isBalanced(root)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
