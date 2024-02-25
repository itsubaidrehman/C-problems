#include <stdio.h>

void set_bit(int n, int pos);
void clear_bit(int n, int pos);
void toggle_bit(int n, int pos);
void check_set_bit(int n, int pos);
int main() {
    int n = 11100110;
    int pos = 2;
    set_bit(n, pos);
    clear_bit(n, pos);
    toggle_bit(n, pos);
    check_set_bit(n, pos);
    return 0;
}



void set_bit(int n, int pos) {
    printf("Number is %d & we have to set the %d bit \n", n, pos);
    int result = n | (1 << pos);
    printf("Number is now %d after setting & we have set the %d bit \n", result, pos);

}

void clear_bit(int n, int pos) {
    printf("Number is %d & we have to clear the %d bit \n", n, pos);
    int result = n & (~(1 << pos));
    printf("Number is now %d after clearing & we have cleared the %d bit \n", result, pos);



}

void toggle_bit(int n, int pos) {
    printf("Number is %d & we have to toggle the %d bit \n", n, pos);
    int result = n ^ ((1 << pos));
    printf("Number is now %d after toggle & we have toggle the %d bit \n", result, pos);


}

void check_set_bit(int n, int pos) {
    printf("Number is %d & we have to check the %d bit \n", n, pos);
    int result = n | (1 << pos);
    if (result == n) {
        printf("Number is now %d after checking & the %d bit is 1 \n", result, pos);
    }
    else {
        printf("Number is now %d after checking & the %d bit is 0 \n", result, pos);
    }


}

