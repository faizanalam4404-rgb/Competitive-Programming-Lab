#include <stdio.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
int height(struct Node *root) {
    int leftHeight, rightHeight;
    if (root == NULL)
        return 0;
    leftHeight = height(root->left);
    rightHeight = height(root->right);

    if (leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}
int main() {
    struct Node n4 = {4, NULL, NULL};
    struct Node n5 = {5, NULL, NULL};
    struct Node n2 = {2, &n4, &n5};
    struct Node n3 = {3, NULL, NULL};
    struct Node n1 = {1, &n2, &n3};

    printf("Height of tree = %d", height(&n1));

    return 0;
}

/*Output:
Height of tree = 3
*/