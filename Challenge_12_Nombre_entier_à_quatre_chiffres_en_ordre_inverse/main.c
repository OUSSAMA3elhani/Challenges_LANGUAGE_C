#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,ALAF,MIAT,ACHARAT,WAHADAT;
printf("donner la nembre :");
scanf("%d",&a);
ALAF=a/1000;
a=a%1000;
MIAT=a/100;
a=a%100;
ACHARAT=a/10;
WAHADAT=a%10;
printf("%d %d %d %d ",WAHADAT,ACHARAT,MIAT,ALAF);
    return 0;
}
