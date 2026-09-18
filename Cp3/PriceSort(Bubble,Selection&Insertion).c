#include <stdio.h>

void bubble(int a[], int n) {
    int t;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    bubble(a,n);

    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}