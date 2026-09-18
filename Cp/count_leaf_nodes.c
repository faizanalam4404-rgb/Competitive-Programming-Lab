#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

int countLeaf(struct Node *root) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return countLeaf(root->left) + countLeaf(root->right);
}

int main() {
    struct Node n4 = {4, NULL, NULL};
    struct Node n5 = {5, NULL, NULL};
    struct Node n2 = {2, &n4, &n5};
    struct Node n3 = {3, NULL, NULL};
    struct Node n1 = {1, &n2, &n3};

    printf("Number of leaf nodes = %d", countLeaf(&n1));

    return 0;
}

/*Output:
Number of leaf nodes = 3
*/