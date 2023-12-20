#include <stdio.h>
#include <stdlib.h>

// Node structure for the Binary Search Tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new key into BST
struct Node* insert(struct Node* root, int key) {
    if (root == NULL)
        return createNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
	else // Duplicate keys not allowed
        printf("Duplicate not allowed!!!\n");
    return root;
}

// Function to perform in-order traversal (recursive)
void inOrderRecursive(struct Node* root) {
    if (root != NULL) {
        inOrderRecursive(root->left);
        printf("%d ", root->data);
        inOrderRecursive(root->right);
    }
}

// Function to perform pre-order traversal (recursive)
void preOrderRecursive(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderRecursive(root->left);
        preOrderRecursive(root->right);
    }
}

// Function to perform post-order traversal (recursive)
void postOrderRecursive(struct Node* root) {
    if (root != NULL) {
        postOrderRecursive(root->left);
        postOrderRecursive(root->right);
        printf("%d ", root->data);
    }
}

// Function to perform in-order traversal (non-recursive)
void inOrderNonRecursive(struct Node* root) {
    // TODO: Implement non-recursive in-order traversal
}

// Function to perform pre-order traversal (non-recursive)
void preOrderNonRecursive(struct Node* root) {
    // TODO: Implement non-recursive pre-order traversal
}

// Function to perform post-order traversal (non-recursive)
void postOrderNonRecursive(struct Node* root) {
    // TODO: Implement non-recursive post-order traversal
}

int main() {
    struct Node* root = NULL;

    // Inserting keys into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Recursive traversals
    printf("In-order (recursive): ");
    inOrderRecursive(root);
    printf("\n");

    printf("Pre-order (recursive): ");
    preOrderRecursive(root);
    printf("\n");

    printf("Post-order (recursive): ");
    postOrderRecursive(root);
    printf("\n");


    return 0;
}
