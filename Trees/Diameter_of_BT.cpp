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

int heightAndDiameter(Node* root, int &diameter) {
    if (root == NULL) return 0;

    int leftHeight = heightAndDiameter(root->left, diameter);
    int rightHeight = heightAndDiameter(root->right, diameter);

    // Calculate the diameter "through" the current node
    int currentDiameter = leftHeight + rightHeight;

    // Update the maximum diameter found so far
    diameter = max(diameter, currentDiameter);

    // Return the height of the current node
    return 1 + max(leftHeight, rightHeight);
}

int diameter(Node* root) {
    int diameter = 0;
    heightAndDiameter(root, diameter);
    return diameter;
}

int main() {
    Node* root = buildtree();

    cout << "Diameter is " << diameter(root);
    return 0;
}
