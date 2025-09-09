#include <stdio.h>
#include <stdlib.h>

int main()
{
    char S[200];
    int c=0;
    printf("donner la chaîne de caractères 1 :");
    scanf("%s",S);
    for(int i=0;i<200;i++){
        if (S[i]=='\0'){
            break;
            }
            c=c+1;
    }
    printf("%d\n",c);
    char s[c];
    for(int i=0;i<c;i++){
        s[i]=S[c-i-1];
    }
    s[c]='\n';
        printf("%s ",s);

    return 0;
}
