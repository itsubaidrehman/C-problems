#include <stdio.h>
#define max_size 100
void getArray(int *, int);
void printArray(int *, int);
void reverseArray(int *, int);
int main() {
    int arr[max_size];
    int size;
    scanf("%d", &size);
    getArray(arr,size);
    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);
}

void getArray(int *arr, int size) {
    for (int i =0; i < size; i++) {
        scanf("%d", (arr + i));
    }
}

void printArray(int *arr, int size) {
    for (int i =0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
}

void reverseArray(int *arr, int size) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
   
