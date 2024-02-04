#include <stdio.h>
void check_if_binary(int);
int main() {
    int n;
    printf("Enter the numer ");
    scanf("%d", &n);
    check_if_binary(n);
}

void check_if_binary(int n) {
    int count = 0;
    int a = n;
    int rem;
    while (n != 0) {
        rem = n % 10;
        if (rem != 0 && rem != 1) {
            count++;
        }
        n = n/10;
    }
    if (count != 0) {
        printf("%d is not binary \n", a);
    }
    else {
        printf("%d is binary \n", a);
    }
}