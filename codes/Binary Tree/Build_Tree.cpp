#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};


Node* buildTree() {
    int value;
    cout << "Enter node value (-1 for NULL): ";
    cin >> value;

    if (value == -1){
        return nullptr;
    }

    Node* newNode = new Node(value);

    cout << "Enter left child of " << value << endl;
    newNode->left = buildTree();

    cout << "Enter right child of " << value << endl;
    newNode->right = buildTree();

    return newNode;
}



int main() {
    cout << "Build the binary tree:\n";
    Node* root = buildTree();

    

    return 0;
}
