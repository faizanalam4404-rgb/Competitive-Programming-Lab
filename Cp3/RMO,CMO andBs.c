#include <stdio.h>

int main() {
    int choice;

    printf("1. Row Major Order\n");
    printf("2. Column Major Order\n");
    printf("3. Binary Search\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Row Major stores row by row.\n");
            break;
        case 2:
            printf("Column Major stores column by column.\n");
            break;
        case 3:
            printf("Binary Search requires a sorted array.\n");
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}