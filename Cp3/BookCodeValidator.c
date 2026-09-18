#include <stdio.h>

int main() {
    int code;

    printf("Enter Book Code: ");
    scanf("%d", &code);

    if (code >= 1000 && code <= 9999)
        printf("Valid Book Code\n");
    else
        printf("Invalid Book Code\n");

    return 0;
}