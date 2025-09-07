#include <stdio.h>

int main() {
    double revenu;
    int score, duree;
    printf("Entrez votre revenu annuel en euros :");
    scanf("%lf", &revenu);

    printf("Entrez votre score de credit sur 1000 :");
    scanf("%d", &score);

    printf("Entrez la duree du pret en annees : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Vous etes éligible au pret.\n");
    }
    else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Vous etes éligible avec conditions au pret.\n");
    }
    else {
        printf("Vous n'etes pas éligible au pret.\n");
    }

    return 0;
}
