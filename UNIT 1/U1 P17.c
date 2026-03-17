//-------------------------17. Check the string is palindrome or not.-------------------------------//
#include <stdio.h>
#include <string.h>

void check_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    check_palindrome(str1);
    check_palindrome(str2);

    return 0;
}
