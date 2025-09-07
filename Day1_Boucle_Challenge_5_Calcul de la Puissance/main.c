#include <stdio.h>

int main() {
    int b, a;
    double resultat = 1;

    printf("Entrez la base : ");
    scanf("%d", &b);

    printf("Entrez l'exposant : ");
    scanf("%d", &a);
    if (a == 0 && b==0) {
        printf("Erreur : Forme indetermuner.\n");
        return 0;
    }
    for (int i = 1; i <= a; i++) {
        resultat *= b;
    }
    printf("%d^%d = %f\n", b, a, resultat);

    return 0;
}
