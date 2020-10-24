#include <stdio.h>
#include <stdlib.h>
void calc(double num1, char op, double num2);
int main()
{
    char operator;
    double number1;
    double number2;
    printf("Number1: ");
    scanf("%lf", &number1);
    printf("Operator(+ - / *): ");
    scanf(" %c", &operator);
    printf("Number2: ");
    scanf("%lf", &number2);
    calc(number1, operator, number2);
    return 0;
}
void calc(double num1, char op, double num2)
{
    if (op == '+') {
        printf("%f\n", num1 + num2);
    } else if (op == '-') {
        printf("%f\n", num1 - num2);
    } else if (op == '/') {
        printf("%f\n", num1 / num2);
    } else if (op == '*') {
        printf("%f", num1 * num2);
    } else {
        printf("invalid operator");
    }
}
