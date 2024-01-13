#include <stdio.h>

int main()
{

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temperature table
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = lower;

    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("-------------------------------------\n");

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9; // 5/9 = 0, so celsius = 0
        printf("%d°F = %d°C \n", fahr, celsius);
        fahr = fahr + step;
    }
}


/** Task: Modify the temperature conversion program to print a heading above the table **/
