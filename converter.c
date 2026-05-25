#include <stdio.h>

/* Conversion Constants*/
const double C_TO_F_SCALE = 9.0 / 5.0;
const double C_TO_F_OFFSET = 32.0;
const double MI_TO_KM = 1.60934;
const double LB_TO_KG = 0.453592;

void convert_temperature(void);
void convert_distance(void);
void convert_weight(void);
void convert_speed(void);

int get_validated_int(int min, int max, const char *prompt, const char *err);

int main(void) {
    int choice;
    do {
        printf("\n= Unit Conversion Station =\n");
        printf("1. Temperature (Celsius <-> Fahrenheight)\n");
        printf("2. Distance (Miles <-> Kilometers)\n");
        printf("3. Weight (Pounds <-> Kilograms)\n");
        printf("4. Speed (MPH <-> KPH)\n");
        printf("5. Quit\n");

        choice = get_validated_int(1, 5,
            "Enter choice: ",
            "Invalid choice. Try again.");
        
        switch (choice) {
            case 1: convert_temperature(); break;
            case 2: convert_distance(); break;
            case 3: convert_weight(); break;
            case 4: convert_speed(); break;
            case 5: printf("Goodbye!\n"); break;
        }
    } while (choice != 5);

    return 0;
}

/* TODO: Implement The Functions Below */

void convert_temperature(void) {
    int direction;
    double value, equals;

    printf("--- Temperature ---\n");
    printf("1. Celsuis to Fahrenheight\n");
    printf("2. Farenheight to Celsuis\n");
    
    direction = get_validated_int(1, 2,
        "Enter direction (1-2): ",
        "Invalid. Try again.");

    switch (direction) {
        case 1:
            printf("\nEnter temperature in Celsius: ");
            fscanf(stdin, "%lf", &value);
            equals = value * C_TO_F_SCALE + C_TO_F_OFFSET;
            printf("%.2f\xb0 = %.2f\xb0\n", value, equals);
            break;
        case 2:
            printf("\nEnter temperature in Fahrenheit: ");
            fscanf(stdin, "%lf", &value);
            equals = (value * C_TO_F_SCALE) * (1.0 / C_TO_F_OFFSET);
            printf("%.2f\xb0 = %.2f\xb0\n", value, equals);
            break;
    }

}

void convert_distance(void) {
    int direction;
    double value, equals;

    printf("--- Distance ---\n");
    printf("1. Miles to Kilometers\n");
    printf("2. Kilometers to Miles\n");
    
    direction = get_validated_int(1, 2,
        "Enter direction (1-2): ",
        "Invalid. Try again.");

    switch (direction) {
        case 1:
            printf("\nEnter distance in miles: ");
            fscanf(stdin, "%lf", &value);
            equals = value * MI_TO_KM;
            printf("%.2f miles = %.2f km\n", value, equals);
            break;
        case 2:
            printf("\nEnter distance in kilometers: ");
            fscanf(stdin, "%lf", &value);
            equals = value / MI_TO_KM;
            printf("%.2f km = %.2f miles\n", value, equals);
            break;
    }
}

void convert_weight(void) {
    int direction;
    double value, equals;

    printf("--- Weight ---\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");
    
    direction = get_validated_int(1, 2,
        "Enter direction (1-2): ",
        "Invalid. Try again.");

    switch (direction) {
        case 1:
            printf("\nEnter weight in pounds: ");
            fscanf(stdin, "%lf", &value);
            equals = value * LB_TO_KG;
            printf("%.2f lbs = %.2f kg\n", value, equals);
            break;
        case 2:
            printf("\nEnter distance in kilometers: ");
            fscanf(stdin, "%lf", &value);
            equals = value / LB_TO_KG;
            printf("%.2f kg = %.2f lbs\n", value, equals);
            break;
    }
}

void convert_speed(void) {
    int direction;
    double value, equals;

    printf("--- Speed ---\n");
    printf("1. MPH to KPH\n");
    printf("2. KPH to MPH\n");
    
    direction = get_validated_int(1, 2,
        "Enter direction (1-2): ",
        "Invalid. Try again.");

    switch (direction) {
        case 1:
            printf("\nEnter speed in mph: ");
            fscanf(stdin, "%lf", &value);
            equals = value * MI_TO_KM;
            printf("%.2f lbs = %.2f kg\n", value, equals);
            break;
        case 2:
            printf("\nEnter distance in kilometers: ");
            fscanf(stdin, "%lf", &value);
            equals = value / MI_TO_KM;
            printf("%.2f kg = %.2f lbs\n", value, equals);
            break;
    }
}
