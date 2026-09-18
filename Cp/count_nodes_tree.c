#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

int countNodes(struct Node *root) {
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    struct Node *root = malloc(sizeof(struct Node));
    root->data = 1;

    root->left = malloc(sizeof(struct Node));
    root->right = malloc(sizeof(struct Node));

    root->left->data = 2;
    root->right->data = 3;

    root->left->left = malloc(sizeof(struct Node));
    root->left->right = malloc(sizeof(struct Node));

    root->left->left->data = 4;
    root->left->right->data = 5;

    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right->left = NULL;
    root->right->right = NULL;

    printf("Number of nodes = %d", countNodes(root));

    return 0;
}

/*Output:
Number of nodes = 5
*/

