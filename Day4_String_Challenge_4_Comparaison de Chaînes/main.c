#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char s1[100];
    char s2[100];
    printf("donner la chaîne de caractères 1 :");
    scanf("%s",s1);
    printf("donner la chaîne de caractères 2 :");
    scanf("%s",s2);
    if (strcmp(s2,s1)==0){
    printf("les chaînes sont égales . ");
    }else{
    printf("les chaînes sont égales différentes.");
    }


    return 0;
}
