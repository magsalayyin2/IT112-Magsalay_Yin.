#include <stdio.h>

int main() {
    char fullName[100];
    char section[50];
    float num1, num2;

    printf("Enter Complete Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\nStudent Calculator\n");
    printf("Student name: %s", fullName);
    printf("Section: %s", section);

    printf("\nResults:\n");
    printf("Addition: %.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.0f * %.0f = %.0f\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Division: %.0f / %.0f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Cannot divide by zero.\n");
    }

    return 0;
}