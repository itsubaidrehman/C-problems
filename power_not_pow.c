#include <stdio.h>
int power_not_pow(int num, int p) {
    int n = 0;
    int result = 1;
    while (p != 0) {
        result = result * num;
        printf("%d\n", result);
        p--;

    }
    return result;
}
int main() {
    int number, power;
    printf("Enter the number to get power of ");
    scanf("%d", &number);
    printf("Enter the power ");
    scanf("%d", &power);
    printf("%d raise to %d is %d \n", number, power, power_not_pow(number, power)); 
}