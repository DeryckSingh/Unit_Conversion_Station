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
        if (!((initial >= 'A' && initial <= 'Z')|| (initial >= 'a' && initial <= 'z')))
            printf("Invalid input. Try again.\n");

    } while (!((initial >= 'A' && initial <= 'Z')|| (initial >= 'a' && initial <= 'z')));



    return 0;

}