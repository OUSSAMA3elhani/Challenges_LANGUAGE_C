#include <stdio.h>

int main() {
    float n1, n2, n3;
    float moyenne;
    printf("Donner le premier nombre: ");
    scanf("%f", &n1);
    printf("Donner le deuxi�me nombre: ");
    scanf("%f", &n2);
    printf("Donner le troisi�me nombre: ");
    scanf("%f", &n3);
    moyenne = (n1*2+n2*3+n3*5) / (2+3+5);
    printf("La moyenne pond�r�e est: %.2f\n", moyenne);

    return 0;
}
