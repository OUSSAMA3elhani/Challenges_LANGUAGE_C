#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char chaine[100];
    char c;
    int count = 0;
    printf("Entrez une chaine de caracteres : ");
    gets(chaine);
    printf(" %s ",strupr(chaine));
    return 0;
}
