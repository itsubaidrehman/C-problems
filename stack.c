#include <stdio.h>
int size = 8;
int top = -1;
//int arr[size];
//int full = size - 1;
void display(int arr[]) {
    if (top == -1) {
        printf("Array is empty \n");
    }
    else {
        printf("The elements in array are \n ");
        for (int i = 0; i <= top; i++) {
            
            printf("%d, ", arr[i]);
        }
        printf("\n");
    }

}

void push(int d, int arr[]) {
    if (top == size - 1) {
        printf("Array is full, use pop first to push your value \n");
    }
    else {
        top++;
        arr[top] = d;
    }
}

void pop() {
    if (top == -1) {
        printf("Array is empty, nothing to pop \n");
    }
    else {
        top--;
    }
}

void showtop(int arr[]) {
    if (top == -1) {
        printf("Array is empty, nothing to show \n");
    }
    else {
        printf("The value at top(index-%d) is %d \n", top, arr[top]);
    }
}

int main () {
    //int size;
    int arr[size];
    display(arr);
    pop();
    push(5, arr);
    push(10, arr);
    push(8, arr);
    push(8, arr); push(6, arr); push(12, arr); push(-8, arr); push(9, arr);
    display(arr);
    push(15, arr);
    pop();
    display(arr);
    pop();
    display(arr);
    showtop(arr);
    push(10, arr);
    push(1, arr);
    display(arr);
    showtop(arr);
    return 0;

}