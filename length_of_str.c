#include <stdio.h>
#define max_size 100
int main() {
    char text[max_size];
    char * str = text;
    int count = 0;

    printf("Enter the text ");
    fgets(text);

    while (*(str++)) {
        count++;
    }

    printf("Length of %s is %d \n", text, count);

}