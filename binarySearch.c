#include <stdio.h>

int binarySearch(int arr[], int target) {
    int size = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("%d \n", mid)
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            printf("%d \n", left);
            left = mid + 1;
            printf("%d \n", left);
        } else {
            printf("%d \n", right);
            right = mid - 1;
            printf("%d \n", right);
        }
        
    }
}

int main() {
    int arr[7] = {2, 5, 7, 9, 11, 15, 19};
    int target = 15;
    printf("Target digit is found at %d \n", binarySearch(arr, target));
    int target = 5;
    printf("Target digit is found at %d \n", binarySearch(arr, target));
    return 0;
}