#include <stdio.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

int countInternal(struct Node *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;

    return 1 + countInternal(root->left) + countInternal(root->right);
}

int main() {
    struct Node n4 = {4, NULL, NULL};
    struct Node n5 = {5, NULL, NULL};
    struct Node n2 = {2, &n4, &n5};
    struct Node n3 = {3, NULL, NULL};
    struct Node n1 = {1, &n2, &n3};

    printf("Number of internal nodes = %d", countInternal(&n1));

    return 0;
}

/*Output:
Number of internal nodes = 2
*/