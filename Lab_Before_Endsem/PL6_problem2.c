#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char op = argv[2][0];
    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Output: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Output: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Output: %.2lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result = num1 / num2;
            printf("Output: %.2lf\n", result);
            break;
        case '%':
            if ((int)num2 == 0) {
                printf("Error: Modulus by zero.\n");
                return 1;
            }
            printf("Output: %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Error: Unknown operator '%c'. Use +, -, *, /, or %%.\n", op);
            return 1;
    }

    return 0;
}
