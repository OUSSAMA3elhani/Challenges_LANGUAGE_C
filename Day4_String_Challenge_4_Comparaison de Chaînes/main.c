#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    char s1[100];
    char s2[100];
    printf("donner la cha�ne de caract�res 1 :");
    scanf("%s",s1);
    printf("donner la cha�ne de caract�res 2 :");
    scanf("%s",s2);
    if (strcmp(s2,s1)==0){
    printf("les cha�nes sont �gales . ");
    }else{
    printf("les cha�nes sont �gales diff�rentes.");
    }


    return 0;
}
