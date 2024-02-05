#include <stdio.h>
void count_set_bits(int);
int main() {
    int n;
    printf("Enter the value ");
    scanf("%d", &n);
    count_set_bits(n);
}

void count_set_bits(int n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (n&1) {
            count++;
        }
        n = n >> 1;
    }
    printf("%d\n", count);
}