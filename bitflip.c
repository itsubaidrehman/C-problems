#include <stdio.h>

int flip(int start, int goal) {
    int count = 0;
    int rem = 0;
    int c = start ^ goal;
    printf("%d \n", c);
    while (c != 0) {
        
        rem = c&1;
        printf("rem is %d\n", rem);
        count = count + rem;
        //printf("%d\n", count);
        printf("c before operation %d \n", c);
        c = c >> 1;
        printf("c after operation %d \n", c);
    }
    return count;
}

int main() {
    int start; int goal;
    scanf("%d", &start);
    scanf("%d", &goal);

    printf("%d\n", flip(start, goal));

}