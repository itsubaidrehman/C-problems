#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int main() {
    char *str = malloc(10 * sizeof(char)); // Allocate memory for the string
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return non-zero to indicate failure
    }

    printf("Enter the string: ");
    scanf("%s", str);
    printf("%s\n", str);

    int count = 0;
    char *ptr = str; // Pointer to iterate through the string

    // Loop through the string until the null terminator is encountered
    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("Length of %s is %d\n", str, count);

    free(str); // Free the allocated memory

    return 0;
}
// int main() {


//     char *str = malloc(10 * sizeof(char));
//     printf("Enter the string ");
//     scanf("%s", str);
//     printf("%s", str);
//     // char text[max_size];
//     // char * str = text;
//     int count = 0;

//     // printf("Enter the text ");
//     // fgets(text);

//     while (*(str++)) {
//         count++;
//     }

//     printf("Length of %s is %d \n", str, count);

//     free(str);

// }
