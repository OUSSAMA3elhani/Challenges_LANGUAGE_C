#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("donner la température en Celsius ");
    scanf("%lf",&c);
    printf("donner la température en Kelvin :%f",c+273.15);

    return 0;
}
