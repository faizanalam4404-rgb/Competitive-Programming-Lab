#include <stdio.h>

int main() {
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int position, i;

    printf("Enter position to delete: ");
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    printf("Array after deletion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*Output:
Enter position to delete: 3
Array after deletion: 10 20 40 50
*/