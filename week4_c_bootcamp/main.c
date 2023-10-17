#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main() {
    // Task 1
    int testNum;
    printf("Input a number: ");

    switch (testNum != 0 ? (testNum > 0 ? 0 : 1) : 2) {
        case 0: 
            printf("Greater than 0\n");
            break;
        case 1:
            printf("Less than 0\n");
            break;
        case 2:
          printf("Is 0\n");
            break;
    }

    // Task 2
    if(testNum % 4 == 0 && testNum % 5 == 0 ? printf("Number is divisible by 4 & 5\n") : printf("Number is not divisible by 4 & 5\n"));

    //Task 3
    int grade;
    printf("Enter a students grade: ");
    scanf("%i", &grade);

    switch(grade >= 50 ? (grade >= 70 ? 0 : 1) : 2) {
        case 0: 
            printf("Distinction\n");
            break;
        case 1:
            printf("Passed\n");
            break;
        case 2:
          printf("Failed\n");
            break;
    }

    //Task 4
    int temp;
    printf("Enter a temperature: ");
    scanf("%i", &temp);

    if(temp > -10 || temp < 40) printf("Temperature is within the range\n");
    else printf("Temperature is outside of the range");

    //Task 5
    int option;
    printf("Enter an option: ");
    scanf("%i", &option);

    switch(option) {
        case 0: 
            printf("Option %i\n", option);
            break;
        case 1:
            printf("Option %i\n", option);
            break;
        case 2:
            printf("Option %i\n", option);
            break;
        case 3:
            printf("Option %i\n", option);
            break;
        case 4:
            printf("Option %i\n", option);
            break;
        case 5:
            printf("Option %i\n", option);
            break;
        default: 
            printf("Option wasn't in the list\n");
    };

    //Task 6:
    while(true) {
        int number;
        printf("Enter a number or terminate with -1: ");
        scanf("%i", &number);

        if(number == -1) return;
        
        if(number > 100 || number < 0) printf("Number is not within the range\n");
        else printf("Number is within the range");
    }
};
