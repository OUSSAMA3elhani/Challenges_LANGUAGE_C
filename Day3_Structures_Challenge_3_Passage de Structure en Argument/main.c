#include <stdio.h>
#include <stdlib.h>

float a;
struct rectangle{
    float longueur;
    float largeur;
};
float aire(struct rectangle s){
    a=s.longueur * s.largeur;

return a;
}

int main()
{
    typedef struct rectangle rectangle;
    rectangle r;
    printf("donnez la longueur : ");
    scanf("%f", &r.longueur);
    printf("donnez la largeur : ");
    scanf("%f", &r.largeur);
    printf("l'aire du rectangle %.2f",aire(r));
    return 0;
}
