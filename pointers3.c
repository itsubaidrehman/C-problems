//swap 2 variables using pointers
#include <stdio.h>
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("The value of ptr1 is %d and the value of ptr2 is %d", *ptr1, *ptr2);

}

int main() {
    int num1; int num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter the values you want to swap");
    scanf("%d %d", ptr1, ptr2);
    printf("The value of ptr1 is %d and the value of ptr2 is %d", *ptr1, *ptr2);
    swap(&ptr1, &ptr2);

}

// #include <stdio.h>
// void swap(int *, int *);
// //swap using pointers
// int main() {
//     int a, c;
//     printf("Enter the value of a ");
//     scanf("%d", &a);
//     printf("Enter the value of c ");
//     scanf("%d", &c);
//     printf("The vvalue of a and c is %d %d \n", a, c);
//     swap(&a, &c);
// }

// void swap(int *a, int *c) {
//     *a ^= *c;
//     *c ^= *a;
//     *a ^= *c;
//     printf("The vvalue of a and c is %d %d \n", *a, *c);
    
// }