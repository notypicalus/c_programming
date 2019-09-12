/* Modify the temperature converstion program to print a heading above the table. */

#include <stdio.h>
int main()
{
    printf("A program prints Fahrenheit-Celsius\n");
    int lower,upper,step;
    int celsius,fahr;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf("화씨\t 섭씨\n");
    while(fahr <= upper)
    {
	celsius = 5 * (fahr - 32) / 9;
	printf("%d\t%d\n", fahr, celsius);
	fahr = fahr + step;
    }
    return 0;
}
