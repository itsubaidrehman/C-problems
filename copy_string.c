#include <stdio.h>
#include <string.h>
#define max_size 100

void copy_string(char *, char *);

int main() {
    char str1[max_size], str2[max_size];
    printf("Enter the 1st string \n");
    gets(str1);

    printf("Enter the 2nd string \n");
    gets(str2);

    printf("1st string is %s & 2nd one is %s \n", str1, str2);
    copy_string(char str1, char str2);
    printf("1st string is %s & 2nd one is %s \n", str1, str2);

}

void copy_string(char *str1, char *str2) {
    int len1 = strlen(str1);
    printf("Length of str1 is %d\n", len1);
    int len2 = strlen(str2);
    printf("Length of str2 is %d\n", len2);
    int size = (len1 > len2) ? len1 : len2;
    printf("Size is %d\n", size);
    for (int i = 0; i < size; i++) {
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    } 
}