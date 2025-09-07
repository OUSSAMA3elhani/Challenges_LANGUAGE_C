#include <stdio.h>

int main() {
    int n;
    do{
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    }while(n <= 0);

    printf("Les %d premiers nombres impairs sont : ", n);
    for (int i = 0; i < n; i++)
        printf("%d ", 2 * i +1);

    return 0;
}
