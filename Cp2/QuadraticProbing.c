#include <stdio.h>

int main() {
    int table[10];
    for(int i=0;i<10;i++)
        table[i]=-1;

    int n,key,index,j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&key);
        index=key%10;
        j=1;

        while(table[index]!=-1){
            index=(key%10 + j*j)%10;
            j++;
        }

        table[index]=key;
    }

    printf("Hash Table:\n");
    for(int i=0;i<10;i++)
        printf("%d : %d\n",i,table[i]);

    return 0;
}