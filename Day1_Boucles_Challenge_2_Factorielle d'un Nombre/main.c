#include <stdio.h>

int main() {
    int n;
    double fact= 1;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur : le nombre doit être positif.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %f\n", n, fact);

    return 0;
}
