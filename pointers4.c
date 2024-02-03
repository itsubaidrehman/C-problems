//Print array using pointers
// #include <stdio.h>

// int main() {
//     int size = 8;
//     int arr[size];
//     int *ptr = arr; //&arr
//     printf("Enter Elements of array ");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", (ptr + i);
//         //scanf("%d", &arr[i]);
//         //scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%d", *(ptr + i));
//         //scanf("%d", arr[i]);
//     }
//     return 0;
// }

//Get and Print Array
#include <stdio.h>
#define max_size 100
//input and print array - pointers
int getArray(int *, int);
int printArray(int *, int);
int main() {
    int array[max_size];
    int size;
    //int *ptr = array;
    printf("Enter the size of array ");
    scanf("%d", &size);
    getArray(array, size);
    // for (int i =0; i < size; i++) {
    //     scanf("%d", &array[i]);
    // }
    printArray(array, size);
    
}
int printArray(int *arr, int size) {
    printf("The elements in arrays are ");
    for (int i =0; i < size; i++) {
        printf("%d", *(arr + i));
    }
}

int getArray(int *arr, int size) {
    printf("Enter the elements of array ");
    for (int i =0; i < size; i++) {
        scanf("%d", (arr+i));
    }
}