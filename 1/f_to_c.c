#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

/* print F-C Temperature Table for 0F .. 300F */
int main()
{
    float fahr;
    
    printf("Fahrenheit -- Celsius\n");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%10.0f %10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
