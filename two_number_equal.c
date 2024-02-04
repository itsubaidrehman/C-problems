#include <stdio.h>
void check_if_equal(int, int);
int main() {
    int a; int b;
    printf("Enter the numer ");
    scanf("%d", &a);
    printf("Enter the numer ");
    scanf("%d", &b);
    check_if_equal(a,b);
}

void check_if_equal(int a, int b) {
    int c = a ^ b;
    if (c) {
        printf("Not Equal");
    }
    else {
        printf("Equal");
    }
}