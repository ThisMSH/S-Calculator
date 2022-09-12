#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    double x, y, S, a, b, c, Pi=3.14159;
    char operator;

    printf("Enter an operator:\n+ for addition.\n- for substraction.\n* for multiplication.\n/ for division.\nc for cos, s for sin or t for tan.\ne for exponentiation.\nr for square root.\nl for logarithm\nx for 2nd degree equation.\n0 to exit.\n");
    scanf("%s", &operator);

    switch (operator)
    {
        case '+': // addition
            printf("Enter the numbers.\nEnter 0 to show the result:\n");
            do
            {
                scanf("%lf", &x);
                S += x;
                
            } while (x != 0);
            
            printf("The result is: %.3lf", S);
            break;
        case '-': // substraction
            printf("Enter the numbers.\nEnter 0 to show the result:\n");
            scanf("%lf", &S);
            do
            {
                scanf("%lf", &x);
                S -= x;
            } while (x != 0);

            printf("The result is: %.3lf", S);
            break;
        case '*': // multiplication
            printf("Enter the numbers.\nEnter 1 to show the result:\n");
            scanf("%lf", &S);
            do
            {
            scanf("%lf", &x);
            S *= x;
            } while (x != 1);

            printf("The result is: %.3lf", S);
            break;
        case '/': // division
            printf("Enter the numbers.\nEnter 1 to show the result:\n");
            scanf("%lf", &S);
            
            do
            {
                scanf("%lf", &x);
                if (x == 0)
                {
                    printf("You can not divide on 0!\n");
                    continue;
                }
                    
                S /= x;
                    
            } while (x != 1);

                printf("The result is: %.3lf", S);
            break;
        case 'c': // cosine
            printf("Enter your number in degrees °:");
            scanf("%lf", &x);
            y = x * Pi / 180;
            S = cos(y);
            printf("Cos(%.0lf)= %.3lf", x, S);
            break;
        case 's': // sine
            printf("Enter your number in degrees °:");
            scanf("%lf", &x);
            y = x * Pi / 180;
            S = sin(y);
            printf("Sin(%.0lf)= %.3lf", x, S);
            break;
        case 't': // tangent
            printf("Enter your number in degrees °:");
            scanf("%lf", &x);
            y = x * Pi / 180;
            S = tan(y);
            printf("Tan(%.0lf)= %.3lf", x, S);
            break;
        case 'e': // exponent
            printf("Enter the base number:");
            scanf("%lf", &x);
            printf("Enter the exponent:");
            scanf("%lf", &y);
            S = 1;
            for (int i = 1; i <= y; i++)
            {
                S *= x;
            }
            printf("The result is: %.3lf", S);
            break;
        case 'r': // square root
            printf("Enter a positive number:");
            scanf("%lf", &x);
            if (x >= 0)
            {
                S = sqrt(x);
                printf("The result is: %.3lf", S);
            }else
            {
                printf("You can't enter a negative value");
            }
            break;
        case 'l': // logarithm
            printf("Enter the number: ");
            scanf("%lf", &x);
            if (x > 0)
            {
                S = log10(x);
                printf("Log(%.3lf)= %.3lf", x, S);
            }else 
            {
                printf("Enter a positive number.");
            }
            break;
        case 'x': // 2nd degree equation calculator
            printf("\tax²+bx+c=0\nEnter the value of a: ");
            scanf("%lf", &a);
            printf("\nEnter the value of b: ");
            scanf("%lf", &b);
            printf("\nEnter the value of c: ");
            scanf("%lf", &c);
            S = b*b-(4*a*c);
            
            if (S > 0)
            {
                x = (-b+sqrt(S))/(2*a);
                y = (-b-sqrt(S))/(2*a);
                printf("This equation has 2 solutions.\nX1= %.3lf\nX2= %.3lf", x, y);
            }else if (S == 0) 
            {
                x = -b/(2*a);
                printf("This equation has 1 solution.\nX= %.3lf", x);
            }else 
            {
                printf("This equation doesn't have a solution in R");
            }
            break;
        case 0:
            exit(0);
            break;
    }
    

    return 0;
}