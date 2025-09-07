#include <stdio.h>

int main() {
    int n, reste, inverse = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    int signe = 1;
    if (n < 0) {
        signe = -1;
        n = -n;
    }
    while (n != 0) {
        reste = n % 10;
        inverse = inverse * 10 + reste;
        n = n / 10;
    }
    inverse *= signe;
    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
