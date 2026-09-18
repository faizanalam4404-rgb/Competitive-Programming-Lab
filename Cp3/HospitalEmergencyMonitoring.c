#include <stdio.h>

int main() {
    int heartRate, oxygen;

    printf("Enter Heart Rate: ");
    scanf("%d", &heartRate);

    printf("Enter Oxygen Level: ");
    scanf("%d", &oxygen);

    if (heartRate < 60 || heartRate > 100 || oxygen < 90)
        printf("Emergency Alert!\n");
    else
        printf("Patient Stable\n");

    return 0;
}