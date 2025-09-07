#include <stdio.h>

int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int x, y, resultat;
    printf("Entrez le premier nombre : ");
    scanf("%d", &x);
    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &y);
    printf("Le produit de %d et %d est : %d\n", x, y, multiplication(x, y));

    return 0;
}
