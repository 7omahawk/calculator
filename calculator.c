
// This is Calculator
// Version 1.0

#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul;
    float div;
    char ch;

    printf("Enter two number to calculate(+,-,*,/): ");
    scanf("%d%c%d", &num1, &ch, &num2);

    if (ch == '+')
    {
        sum = num1 + num2;
        printf("%d %c %d = %d", num1, ch, num2, sum);
    }
    else if (ch == '-')
    {
        sub = num1 - num2;
        printf("%d %c %d = %d", num1, ch, num2, sub);
    }
    else if (ch == '*')
    {
        mul = num1 * num2;
        printf("%d %c %d = %d", num1, ch, num2, mul);
    }
    else if (ch == '/')
    {
        div = (float)num1 / num2;
        printf("%d %c %d = %.2f", num1, ch, num2, div);
    }

    return 0;
}