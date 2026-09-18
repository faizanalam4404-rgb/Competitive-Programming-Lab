#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            found = 1;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}

/*Output:
Enter element to search: 30
Element found at position 3
*/