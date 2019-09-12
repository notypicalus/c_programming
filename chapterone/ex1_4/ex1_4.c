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
	celsius = (5.0 / 9.0) * (fahr-32.0);
	printf("%3.0f\t%6.1f\n", fahr, celsius);
	fahr = fahr + step;
    }
}
