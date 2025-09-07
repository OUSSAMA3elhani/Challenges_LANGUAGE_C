#include <stdio.h>

int main() {
    int n, somme = 0;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur : veuillez entrer un entier positif \n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        somme += i;
    }
    printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);

    return 0;
}
