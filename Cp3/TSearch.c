#include <stdio.h>

int main() {
    int n, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    int low=0, high=n-1;

    while(low<=high){
        int mid1=low+(high-low)/3;
        int mid2=high-(high-low)/3;

        if(a[mid1]==key){
            printf("Found at position %d\n",mid1+1);
            return 0;
        }

        if(a[mid2]==key){
            printf("Found at position %d\n",mid2+1);
            return 0;
        }

        if(key<a[mid1])
            high=mid1-1;
        else if(key>a[mid2])
            low=mid2+1;
        else{
            low=mid1+1;
            high=mid2-1;
        }
    }

    printf("Not Found\n");
    return 0;
}