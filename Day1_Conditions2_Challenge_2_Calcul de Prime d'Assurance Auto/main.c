#include <stdio.h>

int main() {
    int age, type, accidents;
    double primeBase, prime;
    printf("Entrez la prime de base en euros : ");
    scanf("%lf", &primeBase);

    printf("Entrez l'age du conducteur en annees) : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1 = sportive, 2 = utilitaire, 3 = familiale) : ");
    scanf("%d", &type);

    printf("Entrez le nombre d'accidents au cours des 5 dernieres annees : ");
    scanf("%d", &accidents);
    prime = primeBase;
    if (age < 25) {
        prime *= 1.5;
    } else if (age > 65) {
        prime *= 1.2;
    }
    if (type== 1) {
        prime *= 2;
    } else if (type == 2) {
        prime *= 1.2;
    } else if (type== 3) {
        prime *= 1.1;
    } else {
        printf("Type de voiture invalide !\n");
        return 1;
    }
    if (accidents > 1) {
        prime *= 1.3;
    }
    printf("La prime d'assurance calculee est : %f euros\n", prime);

    return 0;
}
