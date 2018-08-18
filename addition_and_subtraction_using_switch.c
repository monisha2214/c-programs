#include <stdio.h>
int main () {
int choice, firstNumber, secondNumber, result;
printf("1. Addition\n2. Subtraction\nPlease enter your choice:");
scanf("%d", &choice);
printf("entered choice is %d\n", &choice);
printf("please enter two numbers:");
scanf("%d %d", &firstNumber, &secondNumber);
switch (choice) {
    case 1: 
        result = firstNumber+secondNumber;
        printf("addition of two numbers is %d", &result);
        break;
    case 2: 
        result = firstNumber - secondNumber;
        printf("subtraction of two numbers is %d", &result);
        break;
    default: 
        printf("invalid input\n");
    }
    return 0;
}