#include <stdio.h>
#include <stdlib.h>

struct livre {
    char titre[100];
    char auteur[100];
    int annee;
};
livre retourne(livre B){


return ;
}
int main()
{
    typedef struct livre livre;
    livre A;
    A.titre= "9ir2a";
    A.auteur= "samir";
    A.annee=1945;
    printf("Avant la modification :\n");
    printf("x= %.3f, y= %.3f\n", A.x, A.y);
    printf("Apres la modification :\n");
    modifiez(&A.x,&A.y);
    printf("x= %.3f, y= %.3f\n", A.x, A.y);
    return 0;
}
