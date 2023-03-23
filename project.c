#include <stdio.h>
#include <math.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, sin, cos, tan, sqrt): ");
    scanf("%c", &op);

    switch (op) {
        case '+':
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf", result);
            break;

        case '-':
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf", result);
            break;

        case '*':
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf", result);
            break;

        case '/':
            printf("Enter two operands: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("Result: %lf", result);
            break;

        case 's':
            printf("Enter an operand: ");
            scanf("%lf", &num1);
            result = sin(num1);
            printf("Result: %lf", result);
            break;

        case 'c':
            printf("Enter an operand: ");
            scanf("%lf", &num1);
            result = cos(num1);
            printf("Result: %lf", result);
            break;

        case 't':
            printf("Enter an operand: ");
            scanf("%lf", &num1);
            result = tan(num1);
            printf("Result: %lf", result);
            break;

        case 'q':
            printf("Enter an operand: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("Result: %lf", result);
            break;

        default:
            printf("Invalid operator!");
            break;
    }

    return 0;
}