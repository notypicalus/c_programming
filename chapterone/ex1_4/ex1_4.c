#include <stdio.h>

int main()
{
    //variable declaration 
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    
    printf("화씨\t 섭씨\n");
    while(fahr <= upper)
    {
	celsius = 5 * (fahr-32) /9;
	printf("%f\t%f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
