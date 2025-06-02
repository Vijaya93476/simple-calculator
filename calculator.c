#include <stdio.h>

int main() {
    char op;
    float num1, num2;
    int choice;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (op) {
            case '+':
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case '%':
                if ((int)num2 != 0)
                    printf("Result: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            default:
                printf("Error: Invalid operator.\n");
        }

        printf("Do you want to perform another calculation? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Thank you for using the calculator!\n");

    return 0;
}
