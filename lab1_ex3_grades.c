#include <stdio.h>

int main(void) {
    char name[64];
    printf("Enter your first name only (one word): ");
    fscanf(stdin, "%63s", name);

    int scores[5];
    for (int i = 0; i < 5; i++) {
        do {
        printf("Enter a score: ");
        fscanf(stdin, "%d", &scores[i]);
        if (scores[i] < 0 || scores[i] > 100)
            printf("Invalid Input. Try Again\n");
        

        } while (scores[i] < 0 || scores[i] > 100);
    }
    int sum = scores[0] + scores[1] + scores [2] + scores[3] + scores [4];
    double average = (double) sum / 5;

    char grade;
    switch ((int) (average / 10)) {
        case 10: 

        case 9: grade = 'A'; break;

        case 8: grade = 'B'; break;

        case 7: grade = 'C'; break;

        case 6: grade = 'D'; break;

        default: grade = 'F'; break;
    }

    //Grade report

    printf("= Grade Report =\n");
    printf("Student:    %s\n", name);

    printf("Scores:     ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);

    }
    printf("\n");
    printf("Average:    %.2lf\n", average);
    printf("Grade:      %c\n", grade);

    if (grade == 'F') {
        printf("Status:     Failing\n");
    } else {
        printf("Status:     Passing\n");
    }

    return 0;
}