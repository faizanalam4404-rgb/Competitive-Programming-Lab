#include <stdio.h>

int main() {
    int n,key;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Hash Table:\n");

    for(int i=0;i<n;i++){
        scanf("%d",&key);
        printf("Index %d -> %d\n", key%10, key);
    }

    return 0;
}