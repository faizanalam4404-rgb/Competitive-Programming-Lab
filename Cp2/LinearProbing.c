#include <stdio.h>

int main() {
    int table[10];
    for(int i=0;i<10;i++)
        table[i]=-1;

    int n,key,index;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&key);
        index=key%10;

        while(table[index]!=-1)
            index=(index+1)%10;

        table[index]=key;
    }

    printf("Hash Table:\n");
    for(int i=0;i<10;i++)
        printf("%d : %d\n",i,table[i]);

    return 0;
}