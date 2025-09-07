#include <stdio.h>

int main() {
    float sbase, hsup, sfinal, thoraire, prime;
    int tposte;
    printf("Entrez le salaire de base en euros : ");
    scanf("%f", &sbase);
    printf("Entrez le nombre d'heures supplementaires : ");
    scanf("%f", &hsup);
    printf("Type de poste (1-Junior, 2-Senior) : ");
    scanf("%d", &tposte);
    thoraire = sbase / 160.0;
    if(tposte == 1) {
        prime = sbase * 0.10;
    } else {
        prime = sbase * 0.20;
    }
    sfinal = sbase + (hsup * 1.5 * thoraire) + prime;
    printf("Le salaire final est : %f euros\n", sfinal);





    return 0;
}
