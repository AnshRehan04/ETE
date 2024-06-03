#include <iostream>
#include <algorithm> // Include this to use the std::max function
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

Node* BuildTree() {
    int data;
    cin >> data;
    if (data == -1) {
        return NULL;
    }
    Node* root = new Node(data);
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

int HeightOfTree(Node* root) {
    if (root == NULL) return 0;
    int lh = HeightOfTree(root->left);
    int rh = HeightOfTree(root->right);
    return 1 + max(lh, rh);
}

int main() {
    cout << "Enter tree data in pre-order format (use -1 for null nodes):" << endl;
    Node* root = BuildTree();
    cout << "Height of the Tree is " << HeightOfTree(root) << endl;
    return 0;
}
