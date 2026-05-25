#include <stdio.h>

int main(void)  {

    printf("%d\n", 7 / 2);      //prediction 3, actual 3
    printf("%.6f\n", 7.0 / 2);      //prediction 3.500000, actual 3.500000
    printf("%.6f\n", 7 / 2.0);      //prediction 3.500000, actual 3.500000
    printf("%.6f\n", (double) 7 / 2);   //prediction 3.500000, actual 3.500000
    printf("%.6f\n",(double) (7 / 2));  //prediction 3.000000, actual 3.000000
    printf("%d\n", 7 % 2);      //prediction 1, actual 1
    printf("%d\n", -7 / 2);     //prediction -3, actual -3
    printf("%d\n", -7 % 2);     //prediction -1, actual -1


    return 0;
}