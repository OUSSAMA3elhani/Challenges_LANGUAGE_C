#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,v;
    printf("donner moi le rayon de la sphère :");
    scanf("%f",&r);
    v=(4/3)*3.14*r*r*r;
    printf("le volume = %f",v);
    return 0;
}
