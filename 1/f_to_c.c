#include <stdio.h>

/* print F-C Temperature Table for 0F .. 300F */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temp table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    
    printf("Fahrenheit -- Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
