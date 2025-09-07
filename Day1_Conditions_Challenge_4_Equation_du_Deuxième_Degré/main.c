#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,dilta,x1,x2;
    printf("pour ax^2+bx+c=0 donner les coefficients a,b,c \n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    dilta=pow(b,2)-4*a*c;
    if(dilta==0){
        x1=-b/(2*a);
    printf("il y a un suel solution est :%f",x1);
}else if(dilta>0){
            x1=(-b+pow(dilta,0.5))/(2*a);
            x2=(-b-pow(dilta,0.5))/(2*a);
        printf("il y a deux solutions réel sont :%f ,%f",x1,x2);

}else{
    printf("Pas des solutions réel");

}
    return 0;
}
