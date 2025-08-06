#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor must be public
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Recursive function to build tree
Node* buildTree() {
    int data;
    cout << "Enter the data: ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);
    cout << "Enter data for left of " << data << endl;
    root->left = buildTree();
    cout << "Enter data for right of " << data << endl;
    root->right = buildTree();

    return root;
}

// Example traversal function: Preorder
void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = buildTree();
    cout << "\nPreorder traversal of the tree:\n";
    preorder(root);
    return 0;
}
