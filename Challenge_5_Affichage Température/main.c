#include <stdio.h>

int main() {
    float C;
    printf("Donner la temp�rature en Celsius :");
    scanf("%f", &C);
    if (C < 0) {
        printf("� %0.2f �C, l'eau est � l'�tat solide.\n", C);
    }
    else if (C >= 0 && C < 100) {
        printf("� %0.2f �C, l'eau est � l'�tat liquide.\n", C);
    }
    else {
        printf("� %0.2f �C, l'eau est � l'�tat gazeux.\n", C);
    }

    return 0;
}
