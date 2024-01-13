/** 
 Tasks:
 Modify the temperature conversion program to print the table in reverse order,
 that is, from 300 degrees to 0 
 **/

#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20


int main()
{
    int fahr;
    printf("Fahrenheit to Celsius Conversion Table\n-------------------------------------\n");

    for (fahr = UPPER; fahr >= LOWER ; fahr -= STEP)
        printf("%3d°F = %3.1f°C\n", fahr, (5.0/9.0)*(fahr-32));
}

/**

Output:  

Fahrenheit to Celsius Conversion Table
-------------------------------------
300°F = 148.9°C
280°F = 137.8°C
260°F = 126.7°C
240°F = 115.6°C
220°F = 104.4°C
200°F = 93.3°C
180°F = 82.2°C
160°F = 71.1°C
140°F = 60.0°C
120°F = 48.9°C
100°F = 37.8°C
 80°F = 26.7°C
 60°F = 15.6°C
 40°F = 4.4°C
 20°F = -6.7°C
  0°F = -17.8°C

*/
