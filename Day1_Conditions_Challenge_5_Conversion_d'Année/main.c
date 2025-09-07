#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,an,Mois,Jours,Heures,Minutes,Secondes;
    printf("donner année : ");
    scanf("%d",&an);
    printf("menu:\n");
    printf("1:Mois\n");
    printf("2:Jours\n");
    printf("3:Heures\n");
    printf("4:Minutes\n");
    printf("5:Secondes\n");
    scanf("%d",&t);
    switch(t){
    case 1:
        Mois=an*12;
        printf("Mois:%d",Mois);
        break;
    case 2:
        Jours=an*365;
        printf("Jours:%d",Jours);
        break;
    case 3:
        Heures=an*365*24;
        printf("Heures:%d",Heures);
        break;
    case 4:
        Minutes=an*365*24*30;
        printf("Minutes:%d",Minutes);
        break;
    case 5:
        Secondes=an*365*24*30*30;
        printf("Secondes:%d",Secondes);
        break;
    default:
        break;
    }


    return 0;
}
