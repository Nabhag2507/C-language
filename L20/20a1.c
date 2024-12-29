#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end, is_palindrome = 1;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    
    start = 0;
    end = length - 1;
    
    while (start < end) {
        if ((str[start] < 'A' || (str[start] > 'Z' && str[start] < 'a') || str[start] > 'z') && (str[start] < '0' || str[start] > '9')) {
            start++;
        }
        else if ((str[end] < 'A' || (str[end] > 'Z' && str[end] < 'a') || str[end] > 'z') && (str[end] < '0' || str[end] > '9')) {
            end--;
        }
        else {            char start_char = str[start];
            char end_char = str[end];

            if (start_char >= 'A' && start_char <= 'Z') {
                start_char += 32;  
            }
            if (end_char >= 'A' && end_char <= 'Z') {
                end_char += 32; 
            }

            if (start_char != end_char) {
                is_palindrome = 0; 
                break;
            }
            start++;
            end--;
        }
    }
}