#include <stdio.h>
#include <stdlib.h>

/* Binary Trees: Nature's Data Structure 🌳
 * Just as trees in nature branch out to maximize sunlight exposure,
 * binary trees in computing branch to optimize data organization!
 */

typedef struct node {
    int data;           // The value stored in the node (like tree's nutrients)
    struct node* left;  // Left branch
    struct node* right; // Right branch
} Node;

// Function prototypes
Node* createNode(int value);
Node* insert(Node* root, int value);
void inorderTraversal(Node* root);
void preorderTraversal(Node* root);
Node* search(Node* root, int value);
int getHeight(Node* root);

// Implementation (same as in the artifact)
// ... [rest of the implementation]