#include <stdio.h>

int main(void) {

    int age;
    do {
        printf("Enter your age (1-120): ");
        fscanf(stdin, "%d", &age);
        if (age < 1 || age > 120)
            printf("Invalid input. Try again.\n");

    } while (age < 1 || age > 120);

    char initial;
    do {
        printf("Enter your initial: ");
        fscanf(stdin, " %c", &initial);
        if (!((initial >= 'A' && initial <= 'Z') || (initial >= 'a' && initial <= 'z')))
            printf("Invalid input. Try again.\n");

    } while (!((initial >= 'A' && initial <= 'Z')|| (initial >= 'a' && initial <= 'z')));

    double decimal;
    do {
        printf("Enter a positive decimal: ");
        fscanf(stdin, "%lf", &decimal);
        if (decimal <= 0.0)
            printf("Invalid Input. Try again. \n");
    } while (decimal <= 0.0);

    printf("Hello, %c. You are %d years old. Your number: %.2lf\n", initial, age, decimal);

    return 0;

}