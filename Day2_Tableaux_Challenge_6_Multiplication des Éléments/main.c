#include <stdio.h>

int main() {
    int n, facteur;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erreur : le nombre d'elements doit etre positif.\n");
        return 1;
    }
    int t[n];
    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);
    for (int i = 0; i < n; i++) {
        t[i] *= facteur;
    }
    printf("Tableau apres multiplication par %d :\n", facteur);
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
    return 0;
}
