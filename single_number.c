#include <stdio.h>
#include <stdlib.h>

void getArray(int *, int);
int single_number(int *, int);
int main() {
    int size;
    int *arr = malloc(size * sizeof(int));
    //int *ptr = malloc(size * sizeof(int))
    printf("Enter the size of an array ");
    scanf("%d", &size);
    getArray(arr, size);
    int result = single_number(arr, size);
    printf("%d\n", result);
    free(arr);
    return 0;
}

int single_number(int *arr, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= *(arr + i);
    }

    return result;
}

void getArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));
        //printf(" ");
    }
    //printf("\n");
}