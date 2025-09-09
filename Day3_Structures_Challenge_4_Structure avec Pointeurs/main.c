#include <stdio.h>
#include <stdlib.h>

struct point{
    float x;
    float y;
};
void modifiez(float *a,float *b){
    float c;
    printf("Donner le la nevile valeur de x= :");
    scanf("%f",&c);
    *a=c;
    printf("Donner le la nevile valeur de y= :");
    scanf("%f",&c);
    *b=c;
}
int main()
{
    typedef struct point point;
    point A;
    A.x= 1;
    A.y= 2;
    printf("Avant la modification :\n");
    printf("x= %.3f, y= %.3f\n", A.x, A.y);
    printf("Apres la modification :\n");
    modifiez(&A.x,&A.y);
    printf("x= %.3f, y= %.3f\n", A.x, A.y);
    return 0;
}
