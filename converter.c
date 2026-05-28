#include <stdio.h>

/* Conversion Constants */
const double C_TO_F_SCALE   = 9.0 / 5.0;
const double C_TO_F_OFFSET  = 32.0;
const double MI_TO_KM       = 1.60934;
const double LB_TO_KG       = 0.453592;

void convert_temperature(void);
void convert_distance(void);
void convert_weight(void);
void convert_speed(void);

int get_validated_int(int min, int max, const char *promp, const char *err);

int main(void) {
    int choice;

    do{
        printf("\n= Unit Conversion Station =\n");
        printf("1. Temperature  (Celsius <-> Farenheit)\n");
        printf("2. Distance     (Miles <-> Kilometers)\n");
        printf("3. Weight       (Pounds <-> Kilograms)\n");
        printf("4. Speed        (MPH <-> KPH)\n");
        printf("5. Quit\n");

        choice = get_validated_int(1, 5, "Enter choice: (1-5): ", "Invalid choice. Try Again.");

        switch (choice) {
            case 1: convert_temperature(); break;
            case 2: convert_distance(); break;
            case 3: convert_weight(); break;
            case 4: convert_speed(); break;
            case 5: printf("Goodbye!\n"); break;
        }


    } while ( choice != 5);

    return 0;
}

/* TODO: implement the functions below */
int get_validated_int(int min, int max, const char *promp, const char *err) {
    int varies;
    do {
        printf("%s", promp);
        fscanf(stdin, "%d", &varies);
        if (varies < min || varies > max)
            printf("%s", err);
    }   while (varies < min || varies > max);
    
    return varies;
}


void convert_temperature(void) {
    int direction;
    double temp, equals;

    printf("--- Temperature ---\n");
    printf("1. Celsius to Farenheit\n");
    printf("2. Farenheit to Celsius\n");

    direction = get_validated_int(1, 2, "Enter choice(1-2):", "Invalid choice. Try again.");

    switch(direction) {
        case 1: 
        printf("\nEnter temperature in Celsius: ");
        fscanf(stdin, "%lf", &temp);
        equals = (temp * C_TO_F_SCALE + C_TO_F_OFFSET);
        printf("%.2lf\xb0 C = %.2lf\xb0 F\n", temp, equals);
        break;

        case 2:
        printf("\nEnter temperature in Farenheit: ");
        fscanf(stdin, "%lf", &temp);
        equals = (temp - C_TO_F_OFFSET) / (C_TO_F_SCALE);
        printf("%.2lf\xb0 F = %.2lf\xb0 C\n",temp, equals);
        break;
    }

}

void convert_distance(void) {
    double distance, equals;
    int direction;

    printf("--- Distance ---\n");
    printf("1. Miles to Kilometers\n");
    printf("2. Kilometers to Miles\n");
    direction = get_validated_int(1, 2, "Enter choice(1-2):", "Invalid choice. Try again.");

    switch(direction) {
        case 1:
        printf("\nEnter distance in Miles: ");
        fscanf(stdin, "%lf", &distance);
        equals = (distance * MI_TO_KM);
        printf("%.2lf miles = %.2lf km\n", distance, equals);
        break;

        case 2:
        printf("\nEnter distance in Kilometers: ");
        fscanf(stdin, "%lf", &distance);
        equals = (distance / MI_TO_KM);
        printf("%.2lf km = %.2lf mi\n", distance, equals);
        break;
    }



}

void convert_weight(void) {
    double weight, equals;
    int direction;

    printf("--- Weight ---\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");

    direction = get_validated_int(1, 2, "Enter choice(1-2):", "Invalid choice. Try again.");

    switch (direction) {
        case 1:
        printf("\nEnter weight in Pounds: ");
        fscanf(stdin, "%lf", &weight);
        equals = (weight * LB_TO_KG);
        printf("%.2lf lbs = %.2lf kg\n", weight, equals);
        break;

        case 2:
        printf("\nEnter weight in Kilograms: ");
        fscanf(stdin, "%lf", &weight);
        equals = (weight / LB_TO_KG);
        printf("%.2lf kg = %.2lf lbs\n", weight, equals);
        break;

    }

}

void convert_speed(void) {
    int direction;
    double speed, equals;

    printf("--- Speed ---\n");
    printf("1. MPH to KPH\n");
    printf("2. KPH to MPH\n");

    direction = get_validated_int(1, 2, "Enter choice(1-2):", "Invalid choice. Try again.");

    switch(direction) {
        case 1:
        printf("Enter speed in MPH: ");
        fscanf(stdin,"%lf", &speed);
        equals = (speed * MI_TO_KM);
        printf("%.2lf mph = %.2lf kph\n", speed, equals);
        break;

        case 2:
        printf("Enter speed in KPH: ");
        fscanf(stdin,"%lf", &speed);
        equals = (speed / MI_TO_KM);
        printf("%.2lf kph = %.2lf mph\n", speed, equals);
    }
}

