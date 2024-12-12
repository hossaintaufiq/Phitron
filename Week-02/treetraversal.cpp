#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

// In-order traversal
void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Pre-order traversal
void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Post-order traversal
void postOrder(Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    // Constructing the tree
    Node* root = new Node(11);
    root->left = new Node(9);
    root->right = new Node(4);
    root->left->left = new Node(7);
    root->left->right = new Node(8);
    root->right->left = new Node(3);
    root->right->right = new Node(1);
    root->left->left->left = new Node(2);
    root->left->left->right = new Node(5);
    root->left->right->right = new Node(6);

    // Performing traversals
    cout << "In-order: ";
    inOrder(root);
    cout << endl;

    cout << "Pre-order: ";
    preOrder(root);
    cout << endl;

    cout << "Post-order: ";
    postOrder(root);
    cout << endl;

    return 0;
}
