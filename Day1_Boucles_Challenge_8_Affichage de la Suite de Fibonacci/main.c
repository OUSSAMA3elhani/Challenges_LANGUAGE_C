#include <stdio.h>

int main() {
    int n;
    double t1 = 0, t2 = 1, suivant;
    do{
    printf("Entrez le nombre de termes à afficher : ");
    scanf("%d", &n);
    }while(n <= 0);
    printf("Les %d premiers termes de la suite de Fibonacci :\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%f", t1);
        if (i < n) {
            printf(", ");
        }
        suivant = t1 + t2;
        t1 = t2;
        t2 = suivant;
    }
    printf("\n");
    return 0;
}
