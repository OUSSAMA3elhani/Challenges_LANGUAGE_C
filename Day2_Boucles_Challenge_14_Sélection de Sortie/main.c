#include <stdio.h>
#include <string.h>

int main(){
    char jours[7][10] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    char choix[10];
    int trouve=0;

    printf("Jours de la semaine : lundi, mardi, mercredi, jeudi, vendredi, samedi, dimanche\n");
    printf("Entrez un jour : ");
    scanf("%s", choix);

    for(int i=0;i<7;i++){
        if(strcmp(choix, jours[i])==0){
            trouve = 1;
            printf("Jour selectionne et suivants :\n");
            for(int j=i;j<7;j++) printf("%s\n", jours[j]);
            break;
        }
    }

    if(!trouve) printf("Jour non valide.\n");
    return 0;
}
