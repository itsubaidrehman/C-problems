#include <stdio.h>
int size = 5;
int front = -1;
int rear = -1;
void display(int arr[]) {
    if (front == -1 && rear == -1) {
        printf("Array is empty \n");
    }
    else {
        printf("Elements of array are ");
        for (int i = front; i <= rear; i++) {
            printf("%d, ", arr[i]);
        }
        printf("\n");
    }

}

void enterQueue(int arr[], int d) {
    if (rear == size - 1) {
        printf("Array/Que is full, remove first to enter element \n");
    }
    
    // else if (rear == size - 1 && front > 0) {
    //     for (int i = 0; i < front; i++) {
    //         front = 
    //     }
        
    // }
    
    else if (rear == -1) {
        front++;
        rear++;
        arr[rear] = d;
        printf("%d is entered at %d \n", d, rear);
    }
    
    
    else {
            rear++;
            arr[rear] = d;
            printf("%d is entered at %d \n", d, rear);
        
    }
}

void removeQueue() {
    if (front == -1 && rear == -1) {
        printf("Array is empty, you have to add something\n");
    }
    else {
        //front++;
        //printf("RQ is performed, now the front is at index %d \n", front);
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
            
        }

    }
}

int main() {
    int arr[size];
    display(arr);
    removeQueue();
    enterQueue(arr, 5);
    enterQueue(arr, 7);
    enterQueue(arr, 4);
    removeQueue();
    display(arr);
    enterQueue(arr, 6);
    enterQueue(arr, 7);
    enterQueue(arr, 4);
    enterQueue(arr, 5);
    enterQueue(arr, 7);
    removeQueue();
    removeQueue();
    display(arr);
    
    
    
    return 0;
}