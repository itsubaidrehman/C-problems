#include <stdio.h>
#define max_size 100
//input and print array - pointers
void getArray(int *, int);
void printArray(int *, int);
void reverseArray(int *, int);
int main() {
    int array[max_size];
    int size;
    //int left = 5;
    //left = left++ + ++left + ++left + left++ + left++;
    //printf("%d", left);
    //int *ptr = array;
    printf("Enter the size of array ");
    scanf("%d", &size);

    printf("Get Elemts of 1st array \n");
    getArray(array, size);
    
    printf("Elemts of 1st array are \n");
    printArray(array, size);

    

    reverseArray(array, size);
    printf("Elements after reverse operation are \n");

    printf("Elemts of reversed array are now \n");
    printArray(array, size);

    

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

//reverse
// 9 8 1 5 2 - array1
 
void reverseArray(int *arr, int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        //*(arr + left) = *(arr + right);
        int temp = *(arr + left);
        *(arr + left) = *(arr + right);
        *(arr + right) = temp;
        left++;
        right--;
    }
}