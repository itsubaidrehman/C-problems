#include <stdio.h>

int main() {
    char *str1 = malloc(10 * sizeof(char));
    char *str2 = malloc(10 * sizeof(char));
    printf("Enter the value of str 1 ");
    scanf("%s", str1);
    printf("Enter the value of str 2 ");
    scanf("%s", str2);
    printf("Str1 is %s & str2 is %s \n", str1, str2);
    swap_str(str1, str2);
    printf("Str1 is %s & str2 is %s \n", str1, str2);
    return 0;


}

void swap_str(char *ptr1, char *ptr2) {
    char *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *temp;
}