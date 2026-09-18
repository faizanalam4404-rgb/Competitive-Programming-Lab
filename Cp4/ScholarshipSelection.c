#include <stdio.h>

int main() {
    int marks, income;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter family income: ");
    scanf("%d", &income);

    if (marks >= 80 && income <= 300000)
        printf("Scholarship Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}