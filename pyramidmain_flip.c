#include <stdio.h>

int main() {
    int size = 8;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j--) {
            printf(" ");

        }
        for (int k = 1; k <= 2 * i -1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
