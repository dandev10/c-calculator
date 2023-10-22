// created by Dandev
// here i also learned how func and arguments work in c!
// imple calculator that works only with + / * -

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void calculator(char operator, double num1, double num2, int result) {
    printf("Enter a math symbol: ");
    scanf("%c", &operator);

    printf("enter number 1: ");
    scanf("%lf", &num1);

    printf("enter number 2: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\nresult is %d\n", result);
            break;
         case '-':
            result = num1 - num2;
            printf("\nresult is %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult is %d\n", result);
            break;
         case '/':
            if (num1 != 0 || num2 != 0) {
                printf("cannot divied with 0\n");
                break;
            }
            if (num1 != 0 == num2 != 0) {
                printf("cannot divied with 0\n");
                break;
            }
            result = num1 / num2;
            printf("\nresult is %d\n", result);
            break;
        default:
            printf("%c is not vaild operator\n", operator);
    }
}


int main() {
    //variables
    char operator;
    double num1;
    double num2;
    int result;

    //an argument and a func to void
    calculator(operator, num1, num2, result);


    return 0;
}

//feell free to use and change