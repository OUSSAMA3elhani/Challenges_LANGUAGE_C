#include <stdio.h>

int main() {
    int n;
    do{
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    }while(n <= 0);
    printf("Les %d premiers nombres pairs sont : ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d  ", 2 * i);
    }

    return 0;
}
