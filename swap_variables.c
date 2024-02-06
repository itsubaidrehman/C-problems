#include <stdio.h>

void swap(int *, int *);
void swapxor(int *, int *);

int main() {
    int a, b;
    printf("enter the value of a ");
    scanf("%d", &a);

    printf("enter the value of b ");
    scanf("%d", &b);
    printf("The values of a is %d & b is %d before swap is \n", a, b);
    swap(&a, &b);
    printf("The values of a is %d & b is %d after swap \n", a, b);
    swapxor(&a, &b);
    printf("The values of a is %d & b is %d after swapxor \n", a, b);
}

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapxor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}