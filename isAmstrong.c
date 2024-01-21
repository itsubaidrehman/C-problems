#include <stdio.h>
#include <math.h>

int isAmstrong(int *num) {
    int originalNum = *num; int n = 0;
    int rem = 0; int result = 0;
    //originalNum = num;
    while (originalNum != 0) {
        n = n+1;
        originalNum /= 10;

    }
    originalNum = *num;
    while (originalNum != 0) {
        rem = originalNum % 10;
        result += pow(rem, n);
        originalNum /= 10;

    }
    return result;
    
}



int main () {
    int number;
    printf("Enter the number to check ");
    scanf("%d", &number);
    int result = isAmstrong(&number);
    if (result == number) {
        printf("The %d is amstrong\n", number);
    }
    else {
        printf("The %d is not amstrong\n", number);
    }
    return 0;
}