#include <stdio.h>

int main() {
    float revenu, revenuimposable, impot;
    int statut;
    float d = 0;
    printf("Entrez votre revenu annuel en euros : ");
    scanf("%f", &revenu);
    printf("Statut fiscal (1 pour Celibataire, 2 pour Marie, 3 pour Chef de famille) : ");
    scanf("%d", &statut);
    switch(statut) {
        case 1:
            d = 1000;
            break;
        case 2:
            d = 2000;
            break;
        case 3:
            d = 3000;
            break;
        default:
            printf("Statut fiscal invalide \n");
            return 1;
    }
    revenuimposable = revenu - d;
    if(revenuimposable < 0) {
        revenuimposable = 0;
    }
    if(revenuimposable <= 20000) {
        impot = revenuimposable * 0.05;
    } else if(revenuimposable <= 50000) {
        impot = revenuimposable * 0.10;
    } else {
        impot = revenuimposable * 0.20;
    }
    printf("Le montant de l'impot a payer est : %.2f euros\n", impot);
    return 0;
}
