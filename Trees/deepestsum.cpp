#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) : data(v), left(nullptr), right(nullptr) {}
};

Node* BuildTree() {
    int data;
    cin >> data;
    if (data == -1) {
        return nullptr;
    }

    Node* root = new Node(data);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        int left, right;
        cin >> left;
        if (left != -1) {
            front->left = new Node(left);
            q.push(front->left);
        }

        cin >> right;
        if (right != -1) {
            front->right = new Node(right);
            q.push(front->right);
        }
    }
    return root;
}

void Inorder(Node* root, int height, int& deepestHeight, int& sum) {
    if (root == nullptr) {
        return;
    }

    height++;

    Inorder(root->left, height, deepestHeight, sum);

    if (root->left == nullptr && root->right == nullptr) {
        if (deepestHeight < height) {
            deepestHeight = height;
            sum = root->data; // Reset sum because we found a deeper leaf
        } else if (deepestHeight == height) {
            sum += root->data;
        }
    }

    Inorder(root->right, height, deepestHeight, sum);
}

int DeepestLeavesSum(Node* root) {
    int deepestHeight = 0;
    int sum = 0;
    Inorder(root, 0, deepestHeight, sum);
    return sum;
}

int main() {
    Node* root = BuildTree();
    int ans = DeepestLeavesSum(root);
    cout << ans;
    return 0;
}