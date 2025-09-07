#include <stdio.h>

int main() {
    int nombre;
    unsigned int masque;
    printf("Entrez un nombre entier :");
    scanf("%d", &nombre);
    printf("Hexadécimal : %X\n", nombre);
    printf("Binaire : ");
    masque = 1 << 31;
    for (int i=0; i<32; i++) {
        if (nombre & masque)
            printf("1");
        else
            printf("0");
        masque >>= 1;
    }
    printf("\n");

    return 0;
}
