#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char names[20][50], search[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", names[i]);

    printf("Enter name to search: ");
    scanf("%s", search);

    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Found at position %d\n", i + 1);
            return 0;
        }
    }

    printf("Not Found\n");
    return 0;
}