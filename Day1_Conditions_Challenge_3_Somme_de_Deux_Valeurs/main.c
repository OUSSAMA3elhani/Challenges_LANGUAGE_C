#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("donner a=");
    scanf("%d",&a);
    printf("donner b=");
    scanf("%d",&b);
    if(a!=b){
        printf("%d",a+b);
    }else{
        printf("%d",(a+b)*3);

    }

    return 0;
}
