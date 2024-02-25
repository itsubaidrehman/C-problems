#include <stdio.h>
void fibonacci(int);
int main() {
    int terms = 15;
    fibonacci(terms);
    return 0;
}

void fibonacci(int terms) {
    int first = 0; int second = 1; int c;
    for (int i = 0; i < 8; i++) {
        printf("%d ", first);
        int c = first + second;
        first = second;
        second = c;

    }
    printf("\n");
}