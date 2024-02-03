//swap two arrays
#include <stdio.h>
#define max_size 100
//input and print array - pointers
void getArray(int *, int);
void printArray(int *, int);
void swapArray(int *, int, int *);
int main() {
    int array1[max_size], array2[max_size];
    int size;
    //int left = 5;
    //left = left++ + ++left + ++left + left++ + left++;
    //printf("%d", left);
    //int *ptr = array;
    printf("Enter the size of array ");
    scanf("%d", &size);

    printf("Get Elemts of 1st array \n");
    getArray(array1, size);
    
    printf("Elemts of 1st array are \n");
    printArray(array1, size);

    printf("Get Elemts of 2nd array \n");
    getArray(array2, size);
    
    printf("Elemts of 2nd array are \n");
    printArray(array2, size);

    swapArray(array1, size, array2);
    printf("Elements after swapping are ");

    printf("Elemts of 1st array are now \n");
    printArray(array1, size);

    printf("Elemts of 2nd array are \n");
    printArray(array2, size);

    return 0;
}
void printArray(int *arr, int size) {
    printf("The elements in arrays are ");
    for (int i =0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void getArray(int *arr, int size) {
    printf("Enter the elements of array ");
    for (int i =0; i < size; i++) {
        scanf("%d", (arr+i));
    }
}

// 2 5 1 8 9 - array1
// 9 8 1 5 2 - array2
//swapping
// 9 8 1 5 2 - array1
// 2 5 1 8 9 - array2

void swapArray(int *arr1, int size, int *arr2) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int temp = *(arr1 + left);
        *(arr1 + left) = *(arr2 + left);
        *(arr2 + left) = temp;
        left++;
        

    }
}