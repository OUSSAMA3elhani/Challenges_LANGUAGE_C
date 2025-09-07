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
    int somme = 0;
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        somme += t[i];
    }
    double moyenne = (double)somme / n;
    printf("La moyenne des elements du tableau est : %.2f\n", moyenne);
    return 0;
}
