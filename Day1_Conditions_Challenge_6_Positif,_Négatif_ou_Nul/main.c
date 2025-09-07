#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("donner le nembre :");
    scanf("%d",&a);
    if(a>0)
        printf("le nembre est positif");
    else if(a<0)
        printf("le nembre est Négatif");
    else
        printf("le nembre est Nul");

    return 0;
}
