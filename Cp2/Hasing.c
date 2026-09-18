#include <stdio.h>

int main() {
    int key;
    printf("Enter key: ");
    scanf("%d",&key);

    printf("Hash Index = %d\n", key%10);
    return 0;
}