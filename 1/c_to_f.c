#include <stdio.h>

int main ()
{
    float cel, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cel = lower;

    printf("Celsius -- Fahrenheit\n");
    while (cel <= upper) {
        fahr = cel * (9.0/5.0) + 32.0;
        printf("%10.0f %10.1f\n", cel, fahr);
        cel = cel + step;
    }
}
