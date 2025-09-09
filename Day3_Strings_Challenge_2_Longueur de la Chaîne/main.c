#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[100];
    int s=0;
    printf("donner la chaîne de caractères :");
    scanf("%s",str);
    puts(str);

    for(int i=0; str[i]!='\0';i++ ){
        s=s+1;
    }
    printf("%d ",s);

}
