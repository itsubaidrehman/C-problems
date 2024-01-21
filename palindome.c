#include <stdio.h>
#include <string.h>
int ispalindrome(char *p) {
    int left = 0;
    int right = strlen(p) - 1;
    while (left <= right) {
        if (p[left] != p[right]) {
            return 0;
            break;
        }
        left++;
        right--;
        
    }
    return 1;
}

int main () {
    char p[10];// = "madam";
    printf("Enter the characher");
    scanf("%p", &p);

    if (ispalindrome(p)) {
        printf("%s is palindrome\n", p);

    }
    else {
        printf("%s is not palindrome\n", p);
    }
    return 0;
}