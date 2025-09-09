#include <stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    char S[200];
    int i=0,i1=0;
    printf("donner la chaîne de caractères 1 :");
    scanf("%s",s1);
    printf("donner la chaîne de caractères 2 :");
    scanf("%s",s2);
    while(s1[i]!='\0'){
      S[i]=s1[i];
        i=i+1;
    }
    while(s2[i1]!='\0'){
      S[i]=s2[i1];
        i1=i1+1;
        i=i+1;

    }
    S[i]=s2[i1];
    printf("%s",S);




return 0;

    }
