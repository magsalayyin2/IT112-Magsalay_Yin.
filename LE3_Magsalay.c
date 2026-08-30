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
    printf(" %.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf(" %.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf(" %.0f * %.0f = %.0f\n", num1, num2, num1 * num2);
    printf(" %.0f / %.0f = %.2f\n", num1, num2, num1 / num2);

    return 0;
}