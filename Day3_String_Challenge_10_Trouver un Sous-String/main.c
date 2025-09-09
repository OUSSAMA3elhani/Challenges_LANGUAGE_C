#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char c1[100];
    char c2[100];
    printf("Entrez la chaîne de caracteres principale : ");
    gets(c1);
    printf("Entrez la sous-chaîn : ");
    gets(c2);
    if(strstr(c1,c2)!=0){
        printf(" la sous-chaine est presente");
    }else{
        printf(" la sous-chaine n'est presente pas");
    }
gets

    return 0;
}
