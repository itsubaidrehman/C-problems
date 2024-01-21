#include <stdio.h>
int checkBinary(int b) {
    int rem; int count = 0;
    while (b!=0){
        rem = b % 10;
        if (rem != 0 || rem != 1) {
            count++;
        }
        b /= 10;
    }
    if (count != 0) {
        return 0;
    }
    else {
        return 1;
    }
}
int main() {
    int b = 1011010;
    if (checkBinary(b)) {
        printf("The number is binary");
    }
    else {
        printf("The number is not binary")
    }
    return 0;
    //printf(checkBinary(d));
}