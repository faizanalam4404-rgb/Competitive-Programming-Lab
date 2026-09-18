#include <stdio.h>

int main() {
    int stack[10], queue[10];
    int top = -1, front = 0, rear = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    printf("Stack Pop: %d\n", stack[top--]);

    queue[++rear] = 10;
    queue[++rear] = 20;
    printf("Queue Delete: %d\n", queue[front++]);

    return 0;
}