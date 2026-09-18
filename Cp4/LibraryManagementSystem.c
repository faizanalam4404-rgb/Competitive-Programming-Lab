#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("\nBook Details:\n");
    printf("ID: %d\n", b.id);
    printf("Name: %s\n", b.name);

    return 0;
}