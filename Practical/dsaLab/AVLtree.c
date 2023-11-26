#include <stdio.h>
#include <stdlib.h>

// AVL Tree Node structure (extends Node)
struct AVLNode {
    int data;
    struct AVLNode* left;
    struct AVLNode* right;
    int height; // Height of the node
};

// Function to get the height of a node
int height(struct AVLNode* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// Function to get the maximum of two integers
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

// Function to create a new AVL node
struct AVLNode* createAVLNode(int key) {
    struct AVLNode* newNode = (struct AVLNode*)malloc(sizeof(struct AVLNode));
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    newNode->height = 1; // New node is initially at height 1
    return newNode;
}

// Function to rotate the subtree rooted with y to the left
struct AVLNode* leftRotate(struct AVLNode* y) {
    struct AVLNode* x = y->right;
    struct AVLNode* T2 = x->left;

    // Perform rotation
    x->left = y;
    y->right = T2;

    // Update heights
    y->height = maximum(height(y->left), height(y->right)) + 1;
    x->height = maximum(height(x->left), height(x->right)) + 1;

    return x;
}

// Function to rotate the subtree rooted with x to the right
struct AVLNode* rightRotate(struct AVLNode* x) {
    struct AVLNode* y = x->left;
    struct AVLNode* T2 = y->right;

    // Perform rotation
    y->right = x;
    x->left = T2;

    // Update heights
    x->height = maximum(height(x->left), height(x->right)) + 1;
    y->height = maximum(height(y->left), height(y->right)) + 1;

    return y;
}

// Get the balance factor of a node
int getBalance(struct AVLNode* node) {
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

// Function to insert a key into AVL tree
struct AVLNode* insertAVL(struct AVLNode* node, int key) {
    // Perform normal BST insertion
    if (node == NULL)
        return createAVLNode(key);

    if (key < node->data)
        node->left = insertAVL(node->left, key);
    else if (key > node->data)
        node->right = insertAVL(node->right, key);
    else // Duplicate keys not allowed
		printf("Duplicate not allowed!!!\n");
        return node;

    // Update height of current node
    node->height = 1 + maximum(height(node->left), height(node->right));

    // Get the balance factor to check if this node became unbalanced
    int balance = getBalance(node);

    // Left Left Case
    if (balance > 1 && key < node->left->data)
        return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->data)
        return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// AVL tree in-order traversal (recursive)
void inOrderAVL(struct AVLNode* root) {
    if (root != NULL) {
        inOrderAVL(root->left);
        printf("%d ", root->data);
        inOrderAVL(root->right);
    }
}

// Driver program for AVL tree
int main() {
    struct AVLNode* root = NULL;

    // Inserting keys into the AVL tree
    root = insertAVL(root, 10);
    root = insertAVL(root, 20);
    root = insertAVL(root, 30);

    // In-order traversal of AVL tree
    printf("In-order (AVL): ");
    inOrderAVL(root);
    printf("\n");

    return 0;
}
