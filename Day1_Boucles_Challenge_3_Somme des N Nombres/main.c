#include <stdio.h>

int main() {
    int n;
    int s = 0;
    printf("Entrez un nombre entier positif :");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur : le nombre doit être positif \n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    printf("La somme des %d premiers nombres naturels est : %d\n", n, s);
    return 0;
}
