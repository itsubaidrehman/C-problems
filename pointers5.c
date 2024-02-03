
//copy Array
#include <stdio.h>
#define max_size 100
//input and print array - pointers
void getArray(int *, int);
void printArray(int *, int);
void copyArray(int *, int, int *);
int main() {
    int array[max_size], destArray[max_size];
    int size;
    //int left = 5;
    //left = left++ + ++left + ++left + left++ + left++;
    //printf("%d", left);
    //int *ptr = array;
    printf("Enter the size of array ");
    scanf("%d", &size);
    getArray(array, size);
    // for (int i =0; i < size; i++) {
    //     scanf("%d", &array[i]);
    // }
    printArray(array, size);
    copyArray(array, size, destArray);
    printf("Copied Array is ");
    printArray(destArray, size);
    return 0;
}
void printArray(int *arr, int size) {
    printf("The elements in arrays are ");
    for (int i =0; i < size; i++) {
        printf("%d", *(arr + i));
    }
    printf("\n");
}

void getArray(int *arr, int size) {
    printf("Enter the elements of array ");
    for (int i =0; i < size; i++) {
        scanf("%d", (arr+i));
    }
}

void copyArray(int *arr, int size, int *destArray) {
    int left  = 0;
    int right = size - 1;
    while (left <= right) {
        *(destArray + left) = *(arr + left);
        left++;
    }
    
}








// #include <stdio.h>

// #define MAX_SIZE 100 // Maximum array size


// /* Function declaration to print array */
// void printArray(int arr[], int size);


// int main()
// {
//     int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
//     int size, i;

//     int *source_ptr = source_arr;   // Pointer to source_arr
//     int *dest_ptr   = dest_arr;     // Pointer to dest_arr

//     int *end_ptr;


//     /*
//      * Input size and elements in source array
//      */
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     printf("Enter elements in array: ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", (source_ptr + i));
//     }


//     // Pointer to last element of source_arr
//     end_ptr = &source_arr[size - 1];


//     /* Print source and destination array before copying */
//     printf("\nSource array before copying: ");
//     printArray(source_arr, size);

//     printf("\nDestination array before copying: ");
//     printArray(dest_arr, size);



//     /*
//      * Run loop till source_ptr exists in source_arr
//      * memory range.
//      */
//     while(source_ptr <= end_ptr)
//     {
//         *dest_ptr = *source_ptr;

//         // Increment source_ptr and dest_ptr
//         source_ptr++;
//         dest_ptr++;
//     }


//     /* Print source and destination array after copying */
//     printf("\n\nSource array after copying: ");
//     printArray(source_arr, size);

//     printf("\nDestination array after copying: ");
//     printArray(dest_arr, size);


//     return 0;
// }


// /**
//  * Function to print array elements.
//  * 
//  * @arr     Integer array to print.
//  * @size    Size of array.
//  */
// void printArray(int *arr, int size)
// {
//     int i;

//     for (i = 0; i < size; i++)
//     {
//         printf("%d, ", *(arr + i));
//     }
// }



// #include <stdio.h>
// void printArr(int *arr[]) {
//     for (int i = 0; i < 5; i++) {
//         printf("%d", *(arr + i));
//     }
// }

// int main() {
//     //int arr[100];
//     int sourceArr[5];
//     int *sourcePtr = sourceArr;
//     int destArr[5];
//     int *destPtr = destArr;

//     //get array
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", (sourcePtr + i));

//     }
//     //print source arr
//     printArr(sourceArr);

//     int *endPtr = &sourceArr[5 - 1];

//     while (sourcePtr <= endPtr) {
//         *destPtr = *sourcePtr;
//         (sourcePtr + 1);
//         (destPtr + 1);
//     }

//     printf("\n\nSource array after copying: ");
//     printArr(sourceArr);

//     printf("\nDestination array after copying: ");
//     printArr(destArr);

//     return 0;
// }