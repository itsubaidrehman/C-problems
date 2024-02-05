#include <stdio.h>
int linearSearch(int *, int, int);
int linearSearchSorted(int *, int, int);
int linearSearchSortedR(int *, int, int);
int main() {
    int arr[6] = {2, 1, 5, 8, 4, 7};
    int arrSR[6] = {8, 7, 5, 3, 2, 0};
    int arrS[6] = {2, 3, 5, 6, 8, 9};
    int size = 6;
    int target=8;
    int targetS = 6;
    int targetSR = 3;

    linearSearch(arr, size, target);
    printf("Sorted Arry \n");
    linearSearchSorted(arrS, size, targetS);
    printf("Sorted reverse arry \n");
    linearSearchSortedR(arrSR, size, targetSR);
}

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
        
    }
    return -1;
}

int linearSearchSorted(int arrS[], int size, int targetS) {
    for(int i = 0; i < size; i++) {
        if (arrS[i] == targetS) {
            return i;
        }
        else if (arrS[i] > targetS) {
            return -1;
        }
        
    }
    return -1;
}

int linearSearchSortedR(int arrSR[], int size, int targetSR) {
    for(int i = 0; i < size; i++) {
        if (arrSR[i] == targetSR) {
            return i;
        }
        else if (arrSR[i] < targetSR) {
            return -1;
        }
        
    }
    return -1;
}