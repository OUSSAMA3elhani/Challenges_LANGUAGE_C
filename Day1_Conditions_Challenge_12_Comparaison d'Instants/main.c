#include <stdio.h>
#include <stdlib.h>

int main()
{
    int HH1,MM1,SS1;
    int HH2,MM2,SS2;
    printf("donnez le premier instants sous le format HH:MM:SS :");
    scanf("%d %d %d",&HH1,&MM1,&SS1);
    printf("donnez le deuxi�me instants sous le format HH:MM:SS :");
    scanf("%d %d %d",&HH2,&MM2,&SS2);

    if(HH1>HH2){
        printf("Le premier instant vient avant le deuxi�me.");
        return 0;
    }else if(HH1<HH2){
    printf("Le deuxi�me instant vient avant le premier.");
        return 0;
    }

    if(MM1>MM2){
        printf("Le premier instant vient avant le deuxi�me.");
        return 0;
    }else if(MM1<MM2){
    printf("Le deuxi�me instant vient avant le premier.");
        return 0;

    }

    if(SS1>SS2){
        printf("Le premier instant vient avant le deuxi�me.");
        return 0;
    }else if(SS1<SS2){
        printf("Le deuxi�me instant vient avant le premier.");
        return 0;
    }
    printf("Il s'agit du m�me instant.");

}
