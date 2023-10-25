// created by Dandev
// here i also learned how func and arguments work in c!
// simple calculator that works only with + / * - 
// also p(power of)

#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
#include <string.h>

void calculator(char operator, double num1, double num2, int result, int y) {
    
    
    printf("Enter a math symbol: ");
    scanf("%c", &operator);

    printf("enter number 1: ");
    scanf("%lf", &num1);

    //if (!strcmp(operator, 's')) {
    printf("enter number 2: ");
    scanf("%lf", &num2);        
    //}

    
    if (num1 == 0 && num2 == 0 && operator == '/') {
        printf("Error: cannot divied\n");
        if(y == 1) return;
    }

    switch(operator) {
        case 's':
            result = sqrt(num1);
            printf("result is %d\n", result);
            break;
        case 'p':
            result = pow(num1, num2);
            printf("\nresult is %d\n", result);
            break;
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
            result = num1 / num2;
            //if (num1 == 0 && num2 == 0 && operator == '/') {
              //  if(y == 1) return;
                //break;
            //}
            if (num1 == 0 || num2 == 0 && operator == '/') {
                printf("Error: cannot divied\n");
                if(y == 1) return;
                break;
            }
            
            printf("\nresult is %d\n", result);
            break;
        default:
            printf("%c is not vaild operator\n", operator);
            if(y == 1) return;
    }
}

//main func
int main() {
    //variables
    char operator;
    double num1;
    double num2;
    int result;
    int y;

    //an argument and a func to void
    calculator(operator, num1, num2, result, y);


    return 0;
}

//feel free to use and change
