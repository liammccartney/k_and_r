#include <stdio.h>

/* print F-C Temperature Table for 0F .. 300F */
int main()
{
    float fahr;
    
    printf("Fahrenheit -- Celsius\n");
    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%10.0f %10.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
