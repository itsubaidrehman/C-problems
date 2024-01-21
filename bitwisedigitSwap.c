#include <stdio.h>

int digitSwap(int a, int b) {
    a = a ^ b;
    printf("a is %d\n", a);
    b = a ^ b;
    printf("b is %d\n", b);
    a = a ^ y;
    printf("a is %d\n", a);
    printf("The value are now a = %d and b = %d", a,b);
    
}
int main() {
    int a = 7;

    int b = 3;

    digitSwap(a,b);
     
    


}