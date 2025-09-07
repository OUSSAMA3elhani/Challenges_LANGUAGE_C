#include <stdio.h>

int main() {
    float n1, n2, n3;
    float moyenne;
    printf("Donner le premier nombre: ");
    scanf("%f", &n1);
    printf("Donner le deuxième nombre: ");
    scanf("%f", &n2);
    printf("Donner le troisième nombre: ");
    scanf("%f", &n3);
    moyenne = (n1*2+n2*3+n3*5) / (2+3+5);
    printf("La moyenne pondérée est: %.2f\n", moyenne);

    return 0;
}
