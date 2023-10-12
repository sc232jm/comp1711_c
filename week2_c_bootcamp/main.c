#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool checkPrime(int i) {
    for(int j=2; j<i/2; j++) {
        if(i%j == 0) {
            return false;
        }
    }
    return true;
}

void reverse_string(char *str)
{
    int len = strlen(str);

    //Need to instance the array in the heap for the it to be returned globally.
    //char new_str[len];

    char *start = str;

    char *end = str + len - 1;

    while(start < end) {
        // Debugging is overrated
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;

        start++;
        end--;
    };
/*
    for (int i = 0; i < len; i++)
    {
        printf("%p\n", end);
        printf("%c\n", *end);

        new_str[i] = *end;
        end--;
    }  

    new_str[len] = '\0';

    printf("Reversed: %s\n", new_str);
    //return new_str;
*/
}

int main() {
    char str[] = "Hello World";

    printf("Original: %s\n", str);

    reverse_string(str);

    printf("Reversed: %s\n", str);

    printf("Input a limit: \n");
    int limit;
    scanf("%i", &limit);
    for(int i=2; i<limit; i++) {
        bool result = checkPrime(i);
        printf("%i %s\n", i, result ? "Prime" : "Non-Prime");
    };
    return 0;
}