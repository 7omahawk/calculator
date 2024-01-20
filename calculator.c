
// This is Calculator
// Version 1.0

#include <stdio.h>

int main()
{
    int select;
    float num1, num2, sum, sub, mul, percentage;
    float div;
    char ch;

    printf("\nFor calculate percentage select YES or NO [YES = 1, NO = 2]: ");
    scanf("%d", &select);

    switch (select)
    {
        // here the code of %
        case 1:
        {
            printf("\nEnter the number for checking percentage [ex: 10%%]: ");
            scanf("%f",&num1);
            percentage = num1 / 100;
            printf("\nThe percentage of %.2f%% is: %.2f ", num1, percentage);
            break;
        }

        // here the code of +,-,*,/
        case 2:
        {
            printf("\nEnter two number to calculate(+,-,*,/ or %%): ");
            scanf("%f%c%f", &num1, &ch, &num2);

            if (ch == '+')
            {
                //addition
                sum = num1 + num2;
                printf("%.2f %c %.2f = %.2f", num1, ch, num2, sum);
            }
            else if (ch == '-')
            {
                //subtraction
                sub = num1 - num2;
                printf("%.2f %c %.2f = %.2f", num1, ch, num2, sub);
            }
            else if (ch == '*')
            {
                //multiplication
                mul = num1 * num2;
                printf("%.2f %c %.2f = %.2f", num1, ch, num2, mul);
            }
            else if (ch == '/')
            {
                //division
                div = num1 / num2;
                printf("%.2f %c %.2f = %.2f", num1, ch, num2, div);
            }
            break;
        }

        default:
        {
            printf("\nError.");
        }
    }

    return 0;
}
