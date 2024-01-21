#include <stdio.h>
//void reverseArray(int, int);
void reverseArray(int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = arr[right]; 
    }
    //return arr;
}

int main() {
    int size;
    printf("Enter the size of array ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array");
    scanf("%d", arr);
    printf("Elemets of array are \n");
    for (int i=0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("Elemets of reversed array are \n");
    reverseArray(arr, size);
    for (int i=0; i < size; i++) {
        printf("%d", arr[i]);
    }
    return 0;

    
}

