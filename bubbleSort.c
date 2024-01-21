#include <stdio.h>
void bubbleSort(int arr[]) {
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        if (arr[j] > arr[j+1]) {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp; 
        }

    }
}

int main() {
    int arr[7] = {3,7,2,1,9,4,6};
    bubbleSort(arr);
}