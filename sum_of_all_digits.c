#include <stdio.h>
int sum_all_digits(int *num) {
    int result = 0; int digit = 0;
    int n = *num;
    while (n != 0) {
        digit = n % 10;
        result += digit;
        n /= 10;
    }
    //printf("%d", result);
    //return (result == *num);
    return result;
}


int main() {
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    if (sum_all_digits(&num)) {
        printf("sum of the %d is %d\n", num, sum_all_digits(&num));
    }
    
    
}