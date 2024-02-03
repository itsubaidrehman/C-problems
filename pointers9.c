#include <stdio.h>

//Add 2 matrices - pointers
#define max_size 100

int getMat(int (*)[], int, int);
int printMat(int (*)[], int, int);

int main () {
    int mat1[max_size][max_size], mat2[max_size][max_size];
    int rows, cols;
    printf("Enter the no of rows ");
    scanf("%d", &rows);
    printf("Enter the no of cols ");
    scanf("%d", &cols);

    getMat(mat1, rows, cols); 
    printMat(mat1, rows, cols);



}

int getMat(int (*mat)[max_size], int rows, int cols) {
    for (int i=0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter the element at row[%d] col[%d] ", i + 1, j + 1);
            scanf("%d", (*(mat + i) + j));
        }
    }
    return 0;
}

int printMat(int (*mat)[max_size], int rows, int cols) {
    for (int i=0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("The element at row[%d] col[%d] is %d ", i + 1, j + 1, *(*(mat + i) + j));
            printf("\n");
            
        }
        printf("\n");
    }
    printf("Matrix is ");

    for (int i=0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(mat + i) + j));
            
            
        }
        printf("\n");
    }
}