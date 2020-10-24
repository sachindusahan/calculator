#include <stdio.h>
#include <stdlib.h>
int main()
{
    double num1, num2;
    char op;
    printf("Enter a Number: ");
    scanf("%lf", &num1);
    printf("Enter operator(+ / * -): ");
    scanf(" %c", &op); // space %c
    printf("Enter second Number: ");
    scanf("%lf", &num2);
    if (op == '+') {
        printf("%f\n", num1 + num2);
    } else if (op == '-'){
        printf("%f\n", num1 - num2);
    } else if (op == '/') {
        printf("%f\n", num1/num2);
    } else if (op == '*') {
        printf("%f\n", num1 * num2);
    } else {
        printf("Something went wrong!");
    }
    return 0;
}
