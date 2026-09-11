#include <stdio.h>

/*
print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit %2s \n", "Celcius");
    while (fahr <= upper) { // int is converted to float before the operation is done.
        // celsius = 5 * (fahr-32) / 9;
        // printf("%3d %6d\n", fahr, celsius); // number in %3d to adjust size the width

        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %12.1f\n", fahr, celsius); //.0 prints 0 digits after the decimal point, while .1 prints 1 digit after the decimal point.

        fahr = fahr + step;
    }
}