#include <stdio.h>
#define max_size 100
void getArray(int *, int);
void printArray(int *, int);
void bubble_sort(int *, int);
//void reverseArray(int *, int);
int main() {
    int arr[max_size];
    int size;
    scanf("%d", &size);
    getArray(arr,size);
    printArray(arr, size);
    bubble_sort(arr, size);
    printArray(arr, size);
    repeating_elemet(arr, size);

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

void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}

void repeating_element(int *arr, int size) {
    //bubble_sort(arr, size);
    for (int i = 0; i < size; i++) {
        int flag=0;
        while (i < n -1 && arr[i] == arr[i+1]) {
            flag = 1;
            i++;
        }
        if (flag==1) {
            printf("%d", arr[i-1]);
        }
    }

} 