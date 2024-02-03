#include <stdio.h>

#define max_size 100

int getMat(int (*)[], int, int);
int printMat(int (*)[], int, int);
int transpose(int (*)[], int (*)[], int, int);
int mulMat(int (*)[], int (*)[], int (*)[], int, int);

int main() {
    int mat1[max_size][max_size], mat2[max_size][max_size], matMul[max_size][max_size];
    int transposeMat[max_size][max_size];
    int rows, cols;
    printf("Enter No of rows ");
    scanf("%d", &rows);
    printf("Enter No of cols ");
    scanf("%d", &cols);

    getMat(mat1, rows, cols);
    printf("Original Matrix \n");
    printMat(mat1, rows, cols);

    transpose(mat1, transposeMat, rows, cols);
    printf("Transposed Matrix \n");
    printMat(transposeMat, rows, cols);

    getMat(mat2, rows, cols);
    printf("Elements of 2nd array \n");
    printMat(mat2, rows, cols);

    mulMat(mat1, mat2, matMul, rows, cols);
    printf("Multiplied Matrix \n");
    printMat(matMul, rows, cols);

    return 0;





}

int getMat(int (*mat)[max_size], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("Element at row[%d] col[%d] is ", i+1, j+1);
            scanf("%d", (*(mat + i) + j));
        }
    }
    return 0;
}

int printMat(int (*mat)[max_size], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            //printf("Element at row[%d] col[%d] is %d \n", i+1, j+1, *(*(mat + i) + j));
            printf("%d ", *(*(mat + i) + j));
            
        }
        printf("\n");
    }
    return 0;
}

int transpose(int (*mat)[max_size], int (*transposeMat)[max_size], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            *(*(transposeMat + j) + i) = *(*(mat + i) + j);
            
        }
        printf("\n");
    }
    return 0;

}

int mulMat(int (*mat1)[max_size], int (*mat2)[max_size], int (*matMul)[max_size], int rows, int cols) {
    int sum;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(matMul + i) + j) = 0;
            for (int k = 0; k < cols; k++) {
                *(*(matMul + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        


        }
        
        
        
    }
}