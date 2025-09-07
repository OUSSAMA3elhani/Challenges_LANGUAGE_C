#include <stdio.h>

int main() {
    float x1, y1, x2, y2 ,xmin,xmax,ymin,ymax;
    float x, y;
    printf("Entrez les coordonnées du point A (x1 y1):");
    scanf("%f %f",&x1,&y1);

    printf("Entrez les coordonnées du point B (x2 y2):");
    scanf("%f %f",&x2,&y2);

    printf("Entrez les coordonnées du point P (x y) : ");
    scanf("%f %f",&x,&y);
    xmin=x1;xmax=x1;ymin=y1;ymin=y1;
    if(xmin>x2)
        xmin=x2;
    if(xmax<x2)
        xmax=x2;
    if(ymin>y2)
        ymin=y2;
    if(ymax<y2)
        ymax=y2;

    if ((x-x1) * (y2-y1) == (y-y1) * (x2-x1)) {

        if (x >= xmin && x <= xmax && y>= ymin && y <= ymax) {
            printf("Le point (%f, %f) est sur le segment.\n", x, y);
        } else {
            printf("Le point (%f, %f) est aligné mais pas sur le segment.\n", x, y);
        }
    } else {
        printf("Le point (%f, %f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
