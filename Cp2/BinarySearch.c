#include <stdio.h>

int main() {
    int n, key;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==key){
            printf("Found at position %d\n",mid+1);
            return 0;
        }
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }

    printf("Not Found\n");
    return 0;
}