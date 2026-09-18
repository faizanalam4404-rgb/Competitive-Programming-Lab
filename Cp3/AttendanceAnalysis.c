#include <stdio.h>

int main() {
    int total, attended;
    float percentage;

    printf("Enter total classes: ");
    scanf("%d", &total);

    printf("Enter attended classes: ");
    scanf("%d", &attended);

    percentage = (attended * 100.0) / total;

    printf("Attendance = %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    return 0;
}