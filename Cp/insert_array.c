#include <stdio.h>

int main() {
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, position, i;

    printf("Enter element: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &position);

    for (i = n; i >= position; i--) {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

    printf("Array after insertion: ");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*Output:
Enter element: 25
Enter position: 3
Array after insertion: 10 20 25 30 40 50
*/