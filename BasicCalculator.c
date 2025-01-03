#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("The difference of %d and %d is %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("The product of %d and %d is %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Division by zero is not allowed\n");
        }
        else
        {
            printf("The division of %d and %d is %d\n", num1, num2, num1 / num2);
        }
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}