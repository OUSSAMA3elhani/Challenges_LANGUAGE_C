#include <stdio.h>

int main() {
    float budget;
    int personnes;
    printf("Entrez votre budget en euros : ");
    scanf("%f", &budget);
    printf("Entrez le nombre de personnes : ");
    scanf("%d", &personnes);

    if (budget >= 1000) {
        printf("Recommandation : Voyage haut de gamme\n");
    } else if (budget >= 500 && budget < 1000) {
        printf("Recommandation : Voyage moyen\n");
    } else {
        printf("Recommandation : Voyage économique\n");
    }
    if (personnes >2 && budget >= 1000) {
        printf("Destination recommandée : Plage\n");
    }else if(personnes <=2 && budget >= 500 && budget < 1000){
        printf("Destination recommandée : Montagne\n");
    }else{
        printf("Destination recommandée : Ville\n");
    }
    return 0;
}
