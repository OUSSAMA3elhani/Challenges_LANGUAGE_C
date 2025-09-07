#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;

    printf("donner les trois nbr: ");
    scanf("%f",&c);
    scanf("%f",&b);
    scanf("%f",&c);
    printf("Moyenne géométrique = %f",pow(a*b*c,1/3));

    return 0;
}
