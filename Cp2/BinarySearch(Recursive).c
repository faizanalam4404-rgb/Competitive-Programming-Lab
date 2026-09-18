#include <stdio.h>

int binarySearch(int a[], int low, int high, int key){
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(a[mid]==key)
        return mid;
    else if(a[mid]<key)
        return binarySearch(a,mid+1,high,key);
    else
        return binarySearch(a,low,mid-1,key);
}

int main(){
    int n,key;

    printf("Enter size: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter sorted elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter key: ");
    scanf("%d",&key);

    int pos=binarySearch(a,0,n-1,key);

    if(pos==-1)
        printf("Not Found\n");
    else
        printf("Found at position %d\n",pos+1);

    return 0;
}