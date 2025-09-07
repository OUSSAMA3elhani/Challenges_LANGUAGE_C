#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erreur : le nombre d'elements doit etre positif.\n");
        return 1;
    }

    int t[n];
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
    }

    printf("Les elements pairs du tableau sont : ");
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 == 0) {
            printf("%d ", t[i]);
        }
    }
    printf("\n");

    return 0;
}
