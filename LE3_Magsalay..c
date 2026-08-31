#include <stdio.h>

int main() {
    char fullName[100];
    char section[50];
    int  num1, num2;

    printf("Enter Complete Name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\nStudent Calculator\n");
    printf("Student name: %s", fullName);
    printf("Section: %s", section);

    printf("\nResults:\n");
    printf(" %d + %d = %d\n", num1, num2, num1 + num2);
    printf(" %d - %d = %d\n", num1, num2, num1 - num2);
    printf(" %d * %d = %d\n", num1, num2, num1 * num2);
    printf(" %d / %d = %.2f\n", num1, num2,(float) num1 / (float) num2);

    return 0;
}