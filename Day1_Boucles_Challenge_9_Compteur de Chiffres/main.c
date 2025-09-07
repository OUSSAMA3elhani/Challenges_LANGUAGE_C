#include <stdio.h>

int main() {
    long long n;
    int compteur = 0;
    printf("Entrez un entier positif : ");
    scanf("%lld", &n);
    if (n < 0) {
        printf("Erreur : veuillez entrer un nombre positif.\n");
        return 1;
    }
    if (n == 0) {
        compteur = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            compteur++;
        }
    }
    printf("Nombre de chiffres = %d\n", compteur);
    return 0;
}
