#include <stdio.h>

int main() {
    float consommation, f;
    int typeu, typec;
    printf("Entrez la consommation en kWh :");
    scanf("%f", &consommation);
    printf("Type d'utilisateur (1 pour residentiel, 2 pour commercial) :");
    scanf("%d", &typeu);
    printf("Type de contrat (0-Standard, 1-Reduit) :");
    scanf("%d", &typec);
    if (typeu == 1) {
        if (typec == 0) {
            f = consommation * 0.2;
        } else {
            f = consommation * 0.15;
        }
    } else if (typeu == 2) {
        if (typec == 0) {
            f = consommation * 0.3;
        } else {
            f = consommation * 0.25;
        }
    } else {
        printf("Type d'utilisateur invalide.\n");
        return 0;
    }
    if (consommation > 500) {
        f *= 1.1;
    }
    printf("La facture d'électricite est : %f euros\n", f);

    return 0;
}
