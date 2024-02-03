#include <stdio.h>
#define max_size 100
//input and print array - pointers
void getArray(int *, int);
void printArray(int *, int);
void searchArray(int *, int, int);
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

    int target;
    printf("Enter target ");
    scanf("%d", &target);


    searchArray(array, size, target);
    printf("Elements after reverse operation are \n");


    

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

void searchArray(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            //return i;
            printf("Target Elemet %d is found at index %d \n", target, i);
            
        }
        
    }
    
}