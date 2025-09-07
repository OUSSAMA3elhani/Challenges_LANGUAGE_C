#include <stdio.h>

int factorielle(int n) {
    int i, resultat = 1;

    if (n == 0 || n == 1)
        return 1;

    for (i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main() {
    int nombre;
    printf("Entrez un nombre positif : ");
    scanf("%d", &nombre);
    if (nombre < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
    } else {
        printf("La factorielle de %d est : %d\n", nombre, factorielle(nombre));
    }
    return 0;
}
